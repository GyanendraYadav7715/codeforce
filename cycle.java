import java.util.*;
import java.io.*;

public class Main {
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() { return Integer.parseInt(next()); }
    }

    // SAM variables
    static int maxNodes;
    static int[][] next;
    static int[] link, len, vis;
    static long[] cnt;
    static int sz, last;

    static void samInit(int n) {
        maxNodes = 2 * n + 5;
        next = new int[maxNodes][26];
        for(int i = 0; i < maxNodes; i++) Arrays.fill(next[i], -1);
        link = new int[maxNodes];
        len = new int[maxNodes];
        cnt = new long[maxNodes];
        vis = new int[maxNodes];
        link[0] = -1;
        len[0] = 0;
        sz = 1;
        last = 0;
    }

    static void samExtend(int c) {
        int cur = sz++;
        len[cur] = len[last] + 1;
        cnt[cur] = 1; // Mark this as an end-position
        int p = last;
        while (p != -1 && next[p][c] == -1) {
            next[p][c] = cur;
            p = link[p];
        }
        if (p == -1) {
            link[cur] = 0;
        } else {
            int q = next[p][c];
            if (len[p] + 1 == len[q]) {
                link[cur] = q;
            } else {
                int clone = sz++;
                len[clone] = len[p] + 1;
                System.arraycopy(next[q], 0, next[clone], 0, 26);
                link[clone] = link[q];
                // Clones represent inner paths, not new occurrences
                cnt[clone] = 0; 
                while (p != -1 && next[p][c] == q) {
                    next[p][c] = clone;
                    p = link[p];
                }
                link[q] = link[cur] = clone;
            }
        }
        last = cur;
    }

    public static void main(String[] args) {
        FastReader fr = new FastReader();
        String s = fr.next();
        int n = s.length();
        
        samInit(n);
        for (int i = 0; i < n; i++) samExtend(s.charAt(i) - 'a');

        // Topological Sort to propagate counts up the Suffix Link tree
        int[] countSort = new int[n + 1];
        for (int i = 0; i < sz; i++) countSort[len[i]]++;
        for (int i = 1; i <= n; i++) countSort[i] += countSort[i - 1];
        int[] sortedNodes = new int[sz];
        for (int i = 0; i < sz; i++) sortedNodes[--countSort[len[i]]] = i;

        for (int i = sz - 1; i > 0; i--) {
            int v = sortedNodes[i];
            cnt[link[v]] += cnt[v]; // Parent in Link tree gets child's occurrences
        }

        int numQueries = fr.nextInt();
        PrintWriter out = new PrintWriter(System.out);

        for (int qID = 1; qID <= numQueries; qID++) {
            String x = fr.next();
            int L = x.length();
            String T = x + x; // Trick: use x+x to find all rotations
            
            long ans = 0;
            int cur = 0, curLen = 0;
            // Iterate until T.length() - 1 to avoid redundant rotations
            for (int i = 0; i < T.length() - 1; i++) {
                int c = T.charAt(i) - 'a';
                while (cur != 0 && next[cur][c] == -1) {
                    cur = link[cur];
                    curLen = len[cur];
                }
                if (next[cur][c] != -1) {
                    cur = next[cur][c];
                    curLen++;
                }
                
                // Maintain window of length L
                while (link[cur] != -1 && len[link[cur]] >= L) {
                    cur = link[cur];
                    curLen = len[cur];
                }
                if (curLen > L) curLen = L;

                // If match is found and state not visited for this query
                if (curLen >= L && vis[cur] != qID) {
                    ans += cnt[cur];
                    vis[cur] = qID;
                }
            }
            out.println(ans);
        }
        out.flush();
    }
}
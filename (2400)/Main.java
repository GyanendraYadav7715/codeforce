
import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {
        // Fast I/O
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();
        if (s == null || s.isEmpty())
            return;

        int n = s.length();

        // cost[i][j] stores the min length of S[i...j] compressed as a single unit
        // Using short to save memory (8000 * 8000 * 2 bytes = 128MB)
        short[][] cost = new short[n][n];

        for (int i = 0; i < n; i++) {
            int[] pi = new int[n - i];
            // cost for a single character (e.g., "1a")
            cost[i][i] = 2;

            for (int j = 1; j < n - i; j++) {
                int k = pi[j - 1];
                // KMP Prefix Function logic
                while (k > 0 && s.charAt(i + j) != s.charAt(i + k)) {
                    k = pi[k - 1];
                }
                if (s.charAt(i + j) == s.charAt(i + k)) {
                    k++;
                }
                pi[j] = k;

                int len = j + 1;
                int period = len - pi[j];

                int currentCost;
                // If the substring S[i...i+j] is perfectly periodic
                if (len % period == 0) {
                    currentCost = getDigits(len / period) + period;
                } else {
                    currentCost = 1 + len;
                }

                // A compressed part is never longer than "1" + original length
                cost[i][i + j] = (short) Math.min(currentCost, 1 + len);
            }
        }

        // Main DP: dp[i] is the minimum length for the prefix of length i
        int[] dp = new int[n + 1];
        Arrays.fill(dp, Integer.MAX_VALUE);
        dp[0] = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                // Try all possible last-cuts at position j
                dp[i] = Math.min(dp[i], dp[j] + cost[j][i - 1]);
            }
        }

        System.out.println(dp[n]);
    }

    // Helper to calculate number of digits in the repetition count
    private static int getDigits(int n) {
        if (n < 10) {
            return 1;
        }
        if (n < 100) {
            return 2;
        }
        if (n < 1000) {
            return 3;
        }
        return 4; // Max n is 8000
    }
}

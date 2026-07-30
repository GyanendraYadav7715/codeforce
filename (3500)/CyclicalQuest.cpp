#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/**
 * Suffix Automaton (SAM) Node structure
 * len: length of the longest string in this state
 * link: suffix link to the next smaller suffix
 * next[26]: transitions for each character
 * cnt: number of occurrences of this state in the original string
 */
struct Node
{
    int len, link;
    int next[26];
    long long cnt;
    int vis; // Used to avoid double counting rotations in the same query

    Node()
    {
        len = 0;
        link = -1;
        cnt = 0;
        vis = 0;
        for (int i = 0; i < 26; i++)
            next[i] = -1;
    }
};

const int MAXN = 1000005;
Node st[MAXN * 2];
int sz, last;

void sam_init()
{
    st[0] = Node();
    sz = 1;
    last = 0;
}

void sam_extend(int c)
{
    int cur = sz++;
    st[cur] = Node();
    st[cur].len = st[last].len + 1;
    st[cur].cnt = 1; // Initial count for the new prefix
    int p = last;
    while (p != -1 && st[p].next[c] == -1)
    {
        st[p].next[c] = cur;
        p = st[p].link;
    }
    if (p == -1)
    {
        st[cur].link = 0;
    }
    else
    {
        int q = st[p].next[c];
        if (st[p].len + 1 == st[q].len)
        {
            st[cur].link = q;
        }
        else
        {
            int clone = sz++;
            st[clone].len = st[p].len + 1;
            for (int i = 0; i < 26; i++)
                st[clone].next[i] = st[q].next[i];
            st[clone].link = st[q].link;
            st[clone].cnt = 0; // Clones don't represent new positions
            while (p != -1 && st[p].next[c] == q)
            {
                st[p].next[c] = clone;
                p = st[p].link;
            }
            st[q].link = st[cur].link = clone;
        }
    }
    last = cur;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    sam_init();
    for (char c : s)
        sam_extend(c - 'a');

    // Pre-calculate frequencies (cnt) using counting sort on lengths
    vector<int> nodes_by_len(s.length() + 1, 0);
    for (int i = 0; i < sz; i++)
        nodes_by_len[st[i].len]++;
    for (int i = 1; i <= s.length(); i++)
        nodes_by_len[i] += nodes_by_len[i - 1];
    vector<int> sorted_st(sz);
    for (int i = 0; i < sz; i++)
        sorted_st[--nodes_by_len[st[i].len]] = i;

    // Propagate counts up the suffix link tree
    for (int i = sz - 1; i > 0; i--)
    {
        int v = sorted_st[i];
        st[st[v].link].cnt += st[v].cnt;
    }

    int n;
    cin >> n;
    for (int query_id = 1; query_id <= n; query_id++)
    {
        string x;
        cin >> x;
        int L = x.length();
        string T = x + x; // Doubling the string for cyclical shifts

        long long total_count = 0;
        int cur = 0, cur_len = 0;

        // Slide window of length L over the SAM using string T
        for (int i = 0; i < T.length() - 1; i++)
        {
            int c = T[i] - 'a';
            while (cur != 0 && st[cur].next[c] == -1)
            {
                cur = st[cur].link;
                cur_len = st[cur].len;
            }
            if (st[cur].next[c] != -1)
            {
                cur = st[cur].next[c];
                cur_len++;
            }

            // If current match is longer than x, shrink it using suffix links
            while (st[st[cur].link].len >= L)
            {
                cur = st[cur].link;
                cur_len = st[cur].len;
            }
            if (cur_len > L)
                cur_len = L;

            // If we have a full rotation (length L) and haven't counted this state yet
            if (cur_len >= L && st[cur].vis != query_id)
            {
                total_count += st[cur].cnt;
                st[cur].vis = query_id; // Mark as visited for this specific query
            }
        }
        cout << total_count << "\n";
    }

    return 0;
}
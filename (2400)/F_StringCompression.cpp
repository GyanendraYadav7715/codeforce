#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int get_digits(int n)
{
    if (n < 10)
        return 1;
    if (n < 100)
        return 2;
    if (n < 1000)
        return 3;
    return 4;
}

// pre_comp[i][j] stores the min length of compressed substring S[i...j]
// Since we only need to compress as "count + unit", we pre-calculate this.
int pre_comp[8005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.length();

    // best_substring_len[i][j] will store the cost of compressing S[i...j] as a single repeating unit
    // We use a vector of vectors or a flattened array to save memory
    vector<vector<short>> cost(n, vector<short>(n));

    for (int i = 0; i < n; i++)
    {
        // Use KMP-like prefix function to find periods for all substrings starting at i
        vector<int> pi(n - i, 0);
        for (int j = 1; j < n - i; j++)
        {
            int k = pi[j - 1];
            while (k > 0 && s[i + j] != s[i + k])
                k = pi[k - 1];
            if (s[i + j] == s[i + k])
                k++;
            pi[j] = k;

            // For each substring S[i...i+j], check for periodicity
            int len = j + 1;
            int period = len - pi[j];
            if (len % period == 0)
            {
                cost[i][i + j] = get_digits(len / period) + (period);
            }
            else
            {
                cost[i][i + j] = 1 + len;
            }

            // Optimization: A compressed version is never longer than "1" + string
            cost[i][i + j] = min((int)cost[i][i + j], 1 + len);
        }
        cost[i][i] = 2; // "1" + character
    }

    // Main DP: dp[i] is min length for prefix of length i
    vector<int> dp(n + 1, 1e9);
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            // dp[i] = min(dp[j] + best compression of substring from j to i-1)
            dp[i] = min(dp[i], dp[j] + (int)cost[j][i - 1]);
        }
    }

    cout << dp[n] << endl;

    return 0;
}
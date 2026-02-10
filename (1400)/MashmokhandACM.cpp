#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    int n, k;
    cin >> n >> k;

    // dp[length][last_element]
    vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        dp[1][i] = 1;
    }

    for (int l = 1; l < k; l++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (dp[l][i] == 0)
                continue;

            for (int j = i; j <= n; j += i)
            {
                dp[l + 1][j] = (dp[l + 1][j] + dp[l][i]) % MOD;
            }
        }
    }

    long long ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = (ans + dp[k][i]) % MOD;
    }

    cout << ans << endl;

    return 0;
}
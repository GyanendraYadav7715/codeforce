#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        vector<int> x(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        int L = x[0];
        int R = x[n - 1];

        int result = (R - L) + min(abs(s - L), abs(s - R));

        cout << result << "\n";
    }

    return 0;
}
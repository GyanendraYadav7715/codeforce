#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int x = a[f - 1];

        int greater = 0, equal = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > x)
                greater++;
            else if (a[i] == x)
                equal++;
        }

        if (greater >= k)
        {
            cout << "NO\n";
        }
        else if (greater + equal <= k)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "MAYBE\n";
        }
    }

    return 0;
}
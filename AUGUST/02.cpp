#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b.push_back(a[i]);
        }

        sort(b.begin(), b.end());
        int lim = b[k - 1]; // k-th smallest value

        int l = 0, r = n - 1;
        bool ok = true;

        while (l < r)
        {
            if (a[l] == a[r])
            {
                l++;
                r--;
            }
            else if (a[l] >= lim)
            {
                l++; // delete left
            }
            else if (a[r] >= lim)
            {
                r--; // delete right
            }
            else
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
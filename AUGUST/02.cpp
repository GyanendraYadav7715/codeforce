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

        if (k == 1)
        {
            cout << "YES\n";
            continue;
        }

        sort(b.begin(), b.end());

        // (k-1)-th smallest value (1-indexed)
        int x = b[k - 2];

        int totalX = 0;
        for (int v : a)
            if (v == x)
                totalX++;

        int l = 0, r = n - 1;
        int deletedX = 0;
        bool ok = true;

        while (l < r)
        {
            if (a[l] == a[r])
            {
                l++;
                r--;
            }
            else if (a[l] > x)
            {
                l++;
            }
            else if (a[r] > x)
            {
                r--;
            }
            else if (a[l] == x)
            {
                deletedX++;
                l++;
            }
            else if (a[r] == x)
            {
                deletedX++;
                r--;
            }
            else
            {
                ok = false;
                break;
            }
        }

        // Need at least (k-1) elements <= x remaining
        if (totalX - deletedX < 1)
            ok = false;

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
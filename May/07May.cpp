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
        int n;
        string s;
        cin >> n >> s;

        bool ok = true;

        bool letterStarted = false;

        for (int i = 0; i < n; i++)
        {
            if (isalpha(s[i]))
            {
                letterStarted = true;
            }
            else
            {
                if (letterStarted)
                {
                    ok = false;
                    break;
                }
            }
        }

         for (int i = 1; i < n; i++)
        {
            if (isdigit(s[i]) && isdigit(s[i - 1]))
            {
                if (s[i] < s[i - 1])
                {
                    ok = false;
                }
            }
        }

         for (int i = 1; i < n; i++)
        {
            if (isalpha(s[i]) && isalpha(s[i - 1]))
            {
                if (s[i] < s[i - 1])
                {
                    ok = false;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
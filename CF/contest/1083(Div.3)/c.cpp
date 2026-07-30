#include <bits/stdc++.h>
using namespace std;

string specialtyString(const string &s)
{
    stack<char> stk;
    for (char c : s)
    {
        if (!stk.empty() && stk.top() == c)
        {
            stk.pop();
        }
        else
        {
            stk.push(c);
        }
    }

    return stk.empty() ? "YES" : "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        cout << specialtyString(s) << "\n";
    }

    return 0;
}
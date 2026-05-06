#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a = 0, b = 0, c = 0, d = 0;
    for (char ch : s)
    {
        if (ch == 'A')
            a++;
        else if (ch == 'B')
            b++;
        else if (ch == 'C')
            c++;
        else if (ch == 'D')
            d++;
    }

    int total = min(a, n) + min(b, n) + min(c, n) + min(d, n);
    cout << total << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
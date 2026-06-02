#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 2 << "\n";
    }
    else if (n % 3 == 0)
    {
        cout << n / 3 << "\n";
    }
    else
    {
        cout << (n / 3) + 1 << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
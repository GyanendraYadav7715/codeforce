#include <iostream>
#include <string>

using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    cout << a << " " << b << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    string reference = "";
    for (int i = 0; i < 20; i++)
    {
        reference += "Yes";
    }

    if (reference.find(s) != string::npos)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
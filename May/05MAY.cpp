#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int x;
    cin >> x;

    int keys[4];
    cin >> keys[1] >> keys[2] >> keys[3];

    int doors_opened = 0;
    int current_key = x;

    while (current_key != 0)
    {
        current_key = keys[current_key];
        doors_opened++;
    }

    if (doors_opened == 3)
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
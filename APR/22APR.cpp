#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int current = 1;
    for (int i = 0; i < n; i++)
    {
        cout << current << " ";
        current += 2;
    }
    cout << endl;
}

int main()
{
    // Optimize I/O operations
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
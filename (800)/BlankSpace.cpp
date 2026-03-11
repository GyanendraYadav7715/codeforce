#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int blankSapce = 0;
    int prvblank = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            blankSapce++;
        }
        else
        {
            prvblank = max(prvblank, blankSapce);
            blankSapce = 0;
        }
    }
    cout << max(blankSapce, prvblank) << endl;
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
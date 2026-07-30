#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int min_val = 101, max_val = 0;
    int pos_min = 0, pos_max = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < min_val)
        {
            min_val = a[i];
            pos_min = i + 1; // 1-indexed
        }
        if (a[i] > max_val)
        {
            max_val = a[i];
            pos_max = i + 1; // 1-indexed
        }
    }

    int L = min(pos_min, pos_max);
    int R = max(pos_min, pos_max);

    // Option 1: Both from left
    int opt1 = R;
    // Option 2: Both from right
    int opt2 = n - L + 1;
    // Option 3: One from left, one from right
    int opt3 = L + (n - R + 1);

    cout << min({opt1, opt2, opt3}) << endl;
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
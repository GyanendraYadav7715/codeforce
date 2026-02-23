#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    int max_streak = 0;
    int current_streak = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (i > 0 && a[i] == a[i - 1] + 1)
        {
            current_streak++;
        }
        else
        {
            current_streak = 1;
        }

        if (current_streak > max_streak)
        {
            max_streak = current_streak;
        }
    }

    cout << max_streak << "\n";
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
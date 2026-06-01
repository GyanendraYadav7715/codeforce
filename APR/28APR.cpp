#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    map<int, long long> cost_map;
    for (int i = 0; i < k; ++i)
    {
        int b;
        long long c;
        cin >> b >> c;
        cost_map[b] += c;
    }

    vector<long long> costs;
    costs.reserve(cost_map.size());
    for (const auto &pair : cost_map)
    {
        costs.push_back(pair.second);
    }

    sort(costs.rbegin(), costs.rend());

    long long total = 0;
    int limit = min(n, (int)costs.size());
    for (int i = 0; i < limit; ++i)
    {
        total += costs[i];
    }

    cout << total << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, m;
    long long h;
    if (!(cin >> n >> m >> h))
        return;

    vector<long long> initial_a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> initial_a[i];
    }

    vector<long long> current_v = initial_a;
    vector<int> last_op(n, 0);

    int last_global_reset = 0;

    for (int t = 1; t <= m; t++)
    {
        int b;
        long long c;
        cin >> b >> c;
        b--;

        if (last_op[b] < last_global_reset)
        {
            current_v[b] = initial_a[b];
        }

        current_v[b] += c;
        last_op[b] = t;

        if (current_v[b] > h)
        {
            current_v[b] = initial_a[b];
            last_global_reset = t;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (last_op[i] < last_global_reset)
        {
            cout << initial_a[i] << (i == n - 1 ? "" : " ");
        }
        else
        {
            cout << current_v[i] << (i == n - 1 ? "" : " ");
        }
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        solve();
    }
    return 0;
}
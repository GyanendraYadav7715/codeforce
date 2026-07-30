#include <iostream>

using namespace std;

void solve()
{
    long long n, a, b, c;
    cin >> n >> a >> b >> c;

    long long cycle_sum = a + b + c;
    long long full_cycles = n / cycle_sum;
    long long total_days = full_cycles * 3;
    long long remaining_n = n % cycle_sum;

    if (remaining_n == 0)
    {
        cout << total_days << endl;
    }
    else if (remaining_n <= a)
    {
        cout << total_days + 1 << endl;
    }
    else if (remaining_n <= a + b)
    {
        cout << total_days + 2 << endl;
    }
    else
    {
        cout << total_days + 3 << endl;
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
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        set<long long> ans;
        ans.insert(0);

        for (long long i = 1; i * i <= n; i++)
        {
            ans.insert(i);
            ans.insert(n / i);
        }

        cout << ans.size() << "\n";

        for (long long x : ans)
            cout << x << " ";

        cout << "\n";
    }

    return 0;
}
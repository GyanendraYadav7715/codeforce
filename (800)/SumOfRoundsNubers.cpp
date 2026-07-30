#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> rounds;
    int power = 1;

    while (n > 0)
    {
        int digit = n % 10;
        if (digit > 0)
        {
            rounds.push_back(digit * power);
        }
        n /= 10;
        power *= 10;
    }

    cout << rounds.size() << endl;
    for (int i = 0; i < rounds.size(); i++)
    {
        cout << rounds[i] << (i == rounds.size() - 1 ? "" : " ");
    }
    cout << endl;
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
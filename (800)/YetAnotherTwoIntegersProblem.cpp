#include <iostream>
#include <cmath>  
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

     int diff = abs(a - b);

     
    int moves = (diff + 9) / 10;

    cout << moves << endl;
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
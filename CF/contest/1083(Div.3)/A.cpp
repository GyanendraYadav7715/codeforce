#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int players;
    cin >> players;

    
    vector<int> dishes(players);
    int max_dishes = 0;  

    for (int i = 0; i < players; i++)
    {
        cin >> dishes[i];

        if (max_dishes < dishes[i])
        {
            max_dishes = dishes[i];
        }
    }

    int count = 0;
    for (int i = 0; i < players; i++)
    {
        if (dishes[i] == max_dishes)
        {
            count++;
        }
    }

    cout << count << endl;
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
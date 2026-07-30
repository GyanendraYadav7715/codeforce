#include <iostream>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (!(cin >> n >> m))
        return 0;

    bool possible_to_end = false;

    for (int i = 0; i < m; ++i)
    {
        int k;
        cin >> k;

        set<int> members;
        bool group_has_pair = false;

        for (int j = 0; j < k; ++j)
        {
            int person;
            cin >> person;

            if (members.count(-person))
            {
                group_has_pair = true;
            }
            members.insert(person);
        }
        if (!group_has_pair)
        {
            possible_to_end = true;
        }
    }

    if (possible_to_end)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
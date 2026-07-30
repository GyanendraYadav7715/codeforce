#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, p, q, level;
    cin >> n;

    set<int> unique_levels;

    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> level;
        unique_levels.insert(level);
    }

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> level;
        unique_levels.insert(level);
    }

    if (unique_levels.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
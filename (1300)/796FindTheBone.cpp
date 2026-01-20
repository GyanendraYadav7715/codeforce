#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    if (!(cin >> n >> m >> k))
        return 0;

    vector<bool> is_hole(n + 1, false);
    for (int i = 0; i < m; i++)
    {
        int holePosition;
        cin >> holePosition;
        is_hole[holePosition] = true;
    }

    int bone = 1;

    if (is_hole[bone])
    {
        cout << bone << endl;
        return 0;
    }

    for (int i = 0; i < k; i++)
    {
        int u, v;
        cin >> u >> v;

        if (u == bone)
        {
            bone = v;
        }
        else if (v == bone)
        {
            bone = u;
        }

        if (is_hole[bone])
        {
            cout << bone << endl;
            return 0;
        }
    }

    cout << bone << endl;

    return 0;
}
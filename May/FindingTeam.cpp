#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Team
{
    int strength;
    int p1;
    int p2;
};

bool compareTeams(const Team &a, const Team &b)
{
    return a.strength > b.strength;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int totalParticipants = 2 * n;
    vector<Team> allPairs;

    for (int i = 2; i <= totalParticipants; ++i)
    {
        for (int j = 1; j < i; ++j)
        {
            int s;
            cin >> s;
            allPairs.push_back({s, i, j});
        }
    }

    sort(allPairs.begin(), allPairs.end(), compareTeams);

    vector<int> partner(totalParticipants + 1, 0);
    int pairedCount = 0;

    for (const auto &pair : allPairs)
    {
        if (partner[pair.p1] == 0 && partner[pair.p2] == 0)
        {
            partner[pair.p1] = pair.p2;
            partner[pair.p2] = pair.p1;
            pairedCount += 2;
        }
        if (pairedCount == totalParticipants)
            break;
    }

    for (int i = 1; i <= totalParticipants; ++i)
    {
        cout << partner[i] << (i == totalParticipants ? "" : " ");
    }
    cout << endl;

    return 0;
}
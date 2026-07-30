#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int citizen;
    if (!(cin >> citizen))
        return 0;

    vector<int> spend(citizen);

    for (int i = 0; i < citizen; i++)
    {
        cin >> spend[i];
    }

    sort(spend.begin(), spend.end());

    long long equalitySpend = 0;
    int maxSpend = spend[citizen - 1];

    for (int i = 0; i < citizen - 1; i++)
    {
        equalitySpend += (maxSpend - spend[i]);
    }

    cout << equalitySpend << endl;

    return 0;
}
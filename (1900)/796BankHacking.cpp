#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int banks[n];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> banks[i];
        max = (max < banks[i]) ? banks[i] : max;
    }
    int connection[n - 1][2];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> connection[i][0];
        cin >> connection[i][1];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (banks[i] == max)
        {
            count++;
        }
    }
    if (count >= 2)
    {
        cout << max + 1 << endl;
    }
    else
    {
        cout << max << endl;
    }

    return 0;
}
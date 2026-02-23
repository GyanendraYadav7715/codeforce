#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int maxValue = 0;
        for (int i = 0; i < n; i++)
        {
            maxValue = max(maxValue, arr[i]);
        }

        cout << n * maxValue << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    if (!(cin >> n))
        return 0;

    vector<int> h(n), a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> h[i] >> a[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (h[i] == a[j])
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
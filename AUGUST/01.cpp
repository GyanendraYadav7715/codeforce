#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> groups;

    int i = 0;
    while (i < n)
    {
        if (s[i] == 'B')
        {
            int count = 0;
            while (i < n && s[i] == 'B')
            {
                count++;
                i++;
            }
            groups.push_back(count);
        }
        else
        {
            i++;
        }
    }

    cout << groups.size() << "\n";

    for (int x : groups)
    {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}
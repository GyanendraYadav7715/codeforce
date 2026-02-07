#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    bool present[26] = {false};
    int distinct_count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            int index = s[i] - 'a';

            if (!present[index])
            {
                present[index] = true;
                distinct_count++;
            }
        }
    }

    cout << distinct_count << endl;

    return 0;
}
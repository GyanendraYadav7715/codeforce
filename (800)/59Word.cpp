#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;
    cin >> s;

    int lowercaseCount = 0;
    int uppercaseCount = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            lowercaseCount++;
        }
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            uppercaseCount++;
        }
    }

    if (lowercaseCount >= uppercaseCount)
    {
        string res = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                res += s[i] + 32;
            }else{
                res += s[i];
            }
            
        }
        cout << res << endl;
    }
    else
    {
        string res = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                res += s[i] - 32;
            }else{
                res += s[i];
            }
           
        }
        cout << res << endl;
    }

    return 0;
}

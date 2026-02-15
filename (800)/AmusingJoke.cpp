#include <iostream>
#include <string>

using namespace std;

// Helper function to avoid repeating the loop 3 times
int getAsciiSum(string s)
{
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += (int)s[i];
    }
    return sum;
}

int main()
{
    string a, b, c;

    if (!(cin >> a >> b >> c))
        return 0;

    if (getAsciiSum(a) + getAsciiSum(b) == getAsciiSum(c))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
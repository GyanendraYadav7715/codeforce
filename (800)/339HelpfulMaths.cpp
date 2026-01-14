#include <iostream>
#include <string>

using namespace std;

string builder(int val, int freq)
{
    string res = "";
    char c = val + '0'; 

    for (int i = 0; i < freq; i++)
    {
        res += c;
        res += '+';
    }
    return res;
}

int main()
{
    string equation;
    cin >> equation;

    int arr[4] = {0};  

    for (int i = 0; i < equation.length(); i++)
    {
        if (equation[i] == '+')
        {
            continue;
        }
        int val = equation[i] - '0';
        arr[val] += 1;
    }

    string ans = "";
    for (int i = 1; i <= 3; i++)
    {
        ans += builder(i, arr[i]);
    }

    
    if (!ans.empty())
    {
        ans.pop_back();
    }

    cout << ans << endl;
    return 0;
}
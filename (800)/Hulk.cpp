#include <iostream>
#include <string>
using namespace std;
void hulk(int n){
    string love = "I love ";
    string hate = "I hate ";
    string res = "";
    int i = 1;
    if (n == i)
    {
        res += hate;
        res += " it";
        cout << res << endl;
    }
    else
    {
        while (i < n)
        {
            if (i % 2 != 0)
            {
                res += hate;
                res += "that ";
            }

            if (i % 2 == 0)
            {
                res += love;
                res += "that ";
            }
            i++;
        }
        if (i % 2 != 0)
        {
            res += hate;
            res += "it";
        }
        else
        {
            res += love;
            res += "it";
        }

        cout << res << endl;
    }
} 

int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << (i % 2 != 0 ? "I hate " : "I love ");

        cout << (i == n ? "it" : "that ");
    }
    return 0;
}

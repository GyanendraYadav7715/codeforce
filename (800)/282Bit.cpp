#include <iostream>
#include <string>  
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = 0;
    string statement;

    for (int i = 0; i < n; i++)
    {
        cin >> statement;

        if (statement[1] == '+')
        {
            x += 1;
        }
        else
        {
            x -= 1;
        }
    }

    cout << x << endl;

    return 0;
}
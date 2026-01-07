#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = 0;
    string statement;

    for (int i = 1; i <= n; i++)
    {

        cin >> statement;
        if (statement[0] == '+')
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
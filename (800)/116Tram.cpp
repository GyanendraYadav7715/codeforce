#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int current = 0;
    int maxCapacity = 0;

    for (int i = 0; i < n; i++)
    {
        int exit, enter;
        cin >> exit >> enter;

        current = current - exit + enter;

        maxCapacity = max(maxCapacity, current);
    }

    cout << maxCapacity << endl;

    return 0;
}
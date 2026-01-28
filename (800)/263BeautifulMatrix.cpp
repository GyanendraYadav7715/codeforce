#include <iostream>
#include <cmath>
using namespace std;
const int ROWS = 5;
const int COLS = 5;
const int target = 1;

int main()
{

    int val;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cin >> val;
            if (val == target)
            {
                cout << abs(i - 3) + abs(j - 3) << endl;
            }
        }
    }

    return 0;
}

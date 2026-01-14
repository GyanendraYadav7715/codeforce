#include <iostream>
using namespace std;
const int ROWS = 5;
const int COLS = 5;

int main()
{

    int matrix[ROWS][COLS];
    int midPostion = matrix[2][2];
    int mainpostion[2];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                mainpostion[0] = i;
                mainpostion[0] = j;
            }
        }
    }

    
    return 0;
}
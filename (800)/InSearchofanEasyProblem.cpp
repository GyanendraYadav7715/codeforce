#include <iostream>

using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    bool isHard = false;
    for (int i = 0; i < n; i++)
    {
        int opinion;
        cin >> opinion;

         if (opinion == 1)
        {
            isHard = true;
             break;
        }
    }

    if (isHard)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string current, previous = "";
    int groups = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> current;
        if (current != previous)
        {
            groups++;
            previous = current;
        }
    }

    cout << groups << endl;
    return 0;
}
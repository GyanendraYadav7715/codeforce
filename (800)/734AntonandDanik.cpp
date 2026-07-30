#include <iostream>
#include <string>
using namespace std;

int main()
{
    int chessGameplayed;
    string s;
    cin >> chessGameplayed >> s;

    int Anton = 0, Danik = 0;

    for (char c : s)
    {
        Anton += (c == 'A');
        Danik += (c == 'D');
    }

    if (Anton == Danik)
        cout << "Friendship" << endl;
    else
        cout << (Anton > Danik ? "Anton" : "Danik") << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main()
{

    int ElephantHouseLocation = 0;
    int ElephantFriendHouseLoaction;
    cin >> ElephantFriendHouseLoaction;
    int move = 0;

    if (ElephantFriendHouseLoaction <= 5)
    {
        move = 1;
        cout << move << endl;
    }
    else
    {
        if (ElephantFriendHouseLoaction % 5 == 0)
        {
            move = ElephantFriendHouseLoaction / 5;
            cout << move << endl;
        }
        else
        {
            move = (ElephantFriendHouseLoaction / 5) + 1;
            cout << move << endl;
        }
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string teamPlayerPostion;
    cin >> teamPlayerPostion;
    int teamA = 0;
    int teamB = 0;
    // 001001
    for (char s : teamPlayerPostion)
    {
        if (s == '1' )
        {
            teamA++;
        }
        else
        { 
            if(teamA>=7){
                
            }else{
                teamA = 0;
            }
           
        }
        if (s == '0')
        {
            teamB++;
        }
        else
        {
            if (teamB >=7){

            }
            else{
                teamB = 0;
            }
        }
    }
    if (teamA >= 7 || teamB >= 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

void danger(string s){
    //this is more clean readable appproach to solve it
    int count = 1;
    bool dangerous = "false";

    for (int i = 1; i < s.length(); i++){
        if (s[i] == s[i-1]){
            count++;
            if(count>=7){
                dangerous = true;
                break;
            }
        }
        else
        {
            count = 1;
        }
    }

    cout << (dangerous ? "YES" : "NO") << endl;
}

int main()
{

    string teamPlayerPostion;
    cin >> teamPlayerPostion;
    int teamA = 0;
    int teamB = 0;
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

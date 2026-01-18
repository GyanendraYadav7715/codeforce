#include<iostream>
#include <string>
using namespace std;

int main(){

    string teamPlayerPostion;
    cin >> teamPlayerPostion;
    int teamA = 0;
    int teamB = 0;

    for (char s : teamPlayerPostion){
        if (s == '1' && teamA<=7){
            teamA++;
        }else if(s == '1' && teamA <= 7)
        {
            teamB++;
        }
    }

        return 0;
}

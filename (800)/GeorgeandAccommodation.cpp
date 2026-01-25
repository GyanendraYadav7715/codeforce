#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    int rooms = 0;
    while (i <= n)
    {
        int p, c;
        cin >> p >> c;

        if((c-p)>=2){
            rooms++;
        }
        i++;
    }
    cout << rooms << endl;
}
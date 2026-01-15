#include <iostream>
#include<string>
using namespace std; 

int main(){
    int n;
    string s;
    cin >> n >> s;

    int removemin = 0;

    for (int i = 1; i < n; i++){
        if(s[i-1]==s[i]){
            removemin++;
        }
    }
    cout << removemin << endl;

    return 0;
}
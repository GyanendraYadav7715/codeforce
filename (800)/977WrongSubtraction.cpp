#include<iostream>

using namespace std;

bool returnLast(int n){
    if(n%10==0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    while (k > 0)
    {
        bool lastDigit = returnLast(n);
        if (lastDigit){
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
        k--;
    }

    cout << n << endl;

    return 0;
}
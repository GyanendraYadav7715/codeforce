#include<iostream>
#include <vector>
using namespace std;

int getOddPart(int n)
{
    while (n % 2 == 0)
    {
        n /= 2;
    }
    return n;
}

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    bool possible = true;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (getOddPart(a[i]) != getOddPart(i + 1))
        {
            possible = false;
        }
    }

    if (possible)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
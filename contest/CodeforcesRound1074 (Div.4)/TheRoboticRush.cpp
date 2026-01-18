#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr1(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    vector<int> arr2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    string robo;
    cin >> robo;

    
}

int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return;
}
#include<iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        
     }

     for (int i = 1; i <= n; i+=2)
     {
         if(i%2!=0 && a[i-1]%2==0)
         {
             cout << "NO";
             return;
         }
     }

     for (int i = 2; i <= n; i += 2)
     {
         if (i % 2 == 0 && a[i - 1] % 2 != 0)
         {
             cout << "NO";
             return;
         }
     }

     cout << "YES";
    }

  


int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
        cout << "\n";
    }

    return 0;
}
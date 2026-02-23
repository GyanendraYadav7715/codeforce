#include <iostream>
#include <set>
using namespace std;

void solve(){
    int n;
    cin >> n;
    set<int> s;
    while (n--)
    {
        int a;
        cin >> a;
        s.insert(a);
    }

    if (s.count(1) && s.count(67))
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
    while (t--)
    {
        solve();
    }

    return 0;
}
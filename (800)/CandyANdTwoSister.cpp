#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    if (n < 3) {
        cout << 0 << endl;
    } else {
        cout << (n - 1) / 2 << endl;
    }
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
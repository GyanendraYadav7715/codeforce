#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> s(n);
    vector<int> sorted_s(n);
    
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        sorted_s[i] = s[i];
    }
    
    sort(sorted_s.begin(), sorted_s.end());
    
    int max1 = sorted_s[n - 1];
    int max2 = sorted_s[n - 2];
    
    for (int i = 0; i < n; i++) {
        if (s[i] == max1) {
            cout << s[i] - max2 << " ";
        } else {
            cout << s[i] - max1 << " ";
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
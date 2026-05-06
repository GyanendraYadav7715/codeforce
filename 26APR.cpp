#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int additions = 0;
    for (int i = 0; i < n - 1; i++) {
        int small = min(a[i], a[i + 1]);
        int large = max(a[i], a[i + 1]);

        while (small * 2 < large) {
            small *= 2;
            additions++;
        }
    }
    cout << additions << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
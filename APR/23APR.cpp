#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();

    if ((s[n - 1] - '0') % 2 == 0) {
        cout << 0 << endl;
        return;
    }

    if ((s[0] - '0') % 2 == 0) {
        cout << 1 << endl;
        return;
    }

    bool hasEven = false;
    for (int i = 0; i < n; i++) {
        if ((s[i] - '0') % 2 == 0) {
            hasEven = true;
            break;
        }
    }

    if (hasEven) {
        cout << 2 << endl;
    } else {
        cout << -1 << endl;
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
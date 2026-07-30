#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve() {
    vector<int> l(3);
    for (int i = 0; i < 3; i++) {
        cin >> l[i];
    }

    sort(l.begin(), l.end());

    if (l[2] == l[0] + l[1]) {
        cout << "YES" << endl;
    }
    else if (l[0] == l[1] && l[2] % 2 == 0) {
        cout << "YES" << endl;
    }
    else if (l[1] == l[2] && l[0] % 2 == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
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
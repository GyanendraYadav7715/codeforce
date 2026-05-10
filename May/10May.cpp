#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        // Possible values of a3 to satisfy each condition
        int x1 = a1 + a2;
        int x2 = a4 - a2;
        int x3 = a5 - a4;

        map<int, int> mp;

        mp[x1]++;
        mp[x2]++;
        mp[x3]++;

        int ans = 0;

        for (auto it : mp) {
            ans = max(ans, it.second);
        }

        cout << ans << "\n";
    }

    return 0;
}
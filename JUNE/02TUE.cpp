#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> f(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> f[i];
    }

    for (int i = 1; i <= n; i++) {
        int first = i;
        int second = f[first];
        int third = f[second];

        if (f[third] == first) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}
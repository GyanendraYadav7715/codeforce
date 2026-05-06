#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

/**
 * Problem 2193A: DBMB and the Array
 * Logic: Sum all elements and check if the difference to 's' 
 * is non-negative and divisible by 'x'.
 */
void solve() {
    long long n, s, x;
    if (!(cin >> n >> s >> x)) return;

    long long current_sum = 0;
    for (int i = 0; i < n; ++i) {
        long long val;
        cin >> val;
        current_sum += val;
    }

    // Calculate the difference needed to reach target 's'
    long long diff = s - current_sum;

    // Check if we can reach 's' by adding multiples of 'x'
    if (diff >= 0 && diff % x == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    // Faster I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Validates if all tasks can be completed within 'mid' time.
 */
bool check(long long mid, int n, const vector<int>& taskCount) {
    long long tasksLeft = 0;
    long long extraCapacity = 0;

    for (int i = 1; i <= n; i++) {
        if (taskCount[i] > mid) {
            // Worker cannot finish their specialized tasks in 'mid' time
            tasksLeft += (taskCount[i] - mid);
        } else {
            // Worker has spare time; can do 1 non-specialized task every 2 hours
            extraCapacity += (mid - taskCount[i]) / 2;
        }
    }
    return extraCapacity >= tasksLeft;
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> taskCount(n + 1, 0);
    for (int i = 0; i < m; i++) {
        int worker;
        cin >> worker;
        taskCount[worker]++;
    }

    long long low = 1, high = 2LL * m;
    long long ans = high;

    // Binary Search on the Answer
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (check(mid, n, taskCount)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
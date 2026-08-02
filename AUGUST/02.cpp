#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> sorted_a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sorted_a[i] = a[i];
    }

    // Sort to find the k-th element (1-based index k -> index k-1)
    sort(sorted_a.begin(), sorted_a.end());
    int v = sorted_a[k - 1];

    int cnt_less = 0;
    int cnt_equal = 0;
    for (int x : a)
    {
        if (x < v)
            cnt_less++;
        else if (x == v)
            cnt_equal++;
    }

    // Maximum number of elements equal to 'v' we are permitted to delete
    int allowed_v_deletions = (cnt_less + cnt_equal) - k;

    int left = 0, right = n - 1;
    bool possible = true;

    while (left < right)
    {
        if (a[left] == a[right])
        {
            left++;
            right--;
        }
        else
        {
            // Attempt 1: Try deleting a[left]
            bool delete_left = false;
            if (a[left] > v)
            {
                delete_left = true;
            }
            else if (a[left] == v && allowed_v_deletions > 0)
            {
                delete_left = true;
                allowed_v_deletions--;
            }

            if (delete_left)
            {
                left++;
                continue;
            }

            // Attempt 2: Try deleting a[right]
            bool delete_right = false;
            if (a[right] > v)
            {
                delete_right = true;
            }
            else if (a[right] == v && allowed_v_deletions > 0)
            {
                delete_right = true;
                allowed_v_deletions--;
            }

            if (delete_right)
            {
                right--;
                continue;
            }

            // If neither end can be deleted, palindrome cannot be formed
            possible = false;
            break;
        }
    }

    if (possible)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

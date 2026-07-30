#include <bits/stdc++.h>
using namespace std;

bool isNonDecreasing(const vector<int> &a)
{
    for (int i = 0; i + 1 < a.size(); i++)
    {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}

int deletionSort(vector<int> &a)
{
    if (isNonDecreasing(a))
        return a.size();
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        cout << deletionSort(a) << "\n";
    }

    return 0;
}
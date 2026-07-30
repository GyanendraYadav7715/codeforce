#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &bookTime, int time)
{
    int left = 0;
    int sum = 0;
    int maxBooks = 0;

    for (int right = 0; right < bookTime.size(); right++)
    {
        sum += bookTime[right];

        while (sum > time)
        {
            sum -= bookTime[left];
            left++;
        }

        maxBooks = max(maxBooks, right - left + 1);
    }

    cout << maxBooks << endl; 
}

int main()
{
    int n, t;
    cin >> n >> t;

    vector<int> bookTime(n);
    for (int i = 0; i < n; i++)
    {
        cin >> bookTime[i];
    }

    solve(bookTime, t);
    return 0;
}

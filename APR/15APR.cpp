#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // number of test cases

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // Choose x = b, y = c, z = c
        // This always satisfies:
        // 1. a ≤ x ≤ b
        // 2. b ≤ y ≤ c
        // 3. c ≤ z ≤ d
        // 4. x + y > z (triangle condition)

        cout << b << " " << c << " " << c << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

// my custom power function
// Logic: Multiplies base by itself 'exp' times
double myPow(double base, int exp)
{
    double result = 1.0;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

int calfun(int n)
{
    return (int)myPow(-1, n) * n;
}

int main()
{
    long long n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += calfun(i);
    }

    cout << sum << endl;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int banks[n];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> banks[i];
        max = (max < banks[i]) ? banks[i] : max;
    }
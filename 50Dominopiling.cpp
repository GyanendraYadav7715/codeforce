#include <iostream>
using namespace std;

int main()
{

    int m, n;
    cin >> m >> n;

    int domino_pieces = 2;
    int cover_pieces = (m * n) / domino_pieces;

    cout << cover_pieces << endl;

    return 0;
}
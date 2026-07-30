#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long total_faces = 0;
    string shape;

    while (n--)
    {
        cin >> shape;

        if (shape == "Tetrahedron")
        {
            total_faces += 4;
        }
        else if (shape == "Cube")
        {
            total_faces += 6;
        }
        else if (shape == "Octahedron")
        {
            total_faces += 8;
        }
        else if (shape == "Dodecahedron")
        {
            total_faces += 12;
        }
        else if (shape == "Icosahedron")
        {
            total_faces += 20;
        }
    }

    cout << total_faces << endl;

    return 0;
}
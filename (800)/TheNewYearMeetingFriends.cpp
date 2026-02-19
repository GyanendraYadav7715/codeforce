#include <iostream>
#include <algorithm>  
#include <vector>    

using namespace std;

int main()
{
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x1, x2, x3;

   
    if (cin >> x1 >> x2 >> x3)
    {
        
        vector<int> locations = {x1, x2, x3};

         
        sort(locations.begin(), locations.end());
        cout << locations[2] - locations[0] << endl;
    }

    return 0;
}
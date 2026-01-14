#include <iostream>
#include <string>
using namespace std;

int main()
{

    string username;
    cin >> username;
    int distinctValue = 0;
    int arr[26]={0};
    for (int i = 0; i < username.length();i++){
        int val = username[i] - 'a';
        if (val >= 0 && val < 26)
        {
            if (arr[val] == 0)
            {
                distinctValue++;
                arr[val] = 1;
            }
        }
    }
        if (distinctValue % 2 == 0)
        {
            cout << "CHAT WITH HER!" << endl;
        }
        else
        {

            cout << "IGNORE HIM!" << endl;
        }

    return 0;
}
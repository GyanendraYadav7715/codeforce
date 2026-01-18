#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;
    string t;

    cin >> s >> t;

    int left = 0;
    int right = s.length() - 1;

    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
    if(s==t){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
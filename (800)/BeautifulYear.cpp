#include<iostream>
#include<set>
using namespace std;

bool isBeautiful(int y){
    set<int> s;
    while(y>0){
        s.insert(y % 10);
        y /= 10;
    }
    return s.size() == 4;
}

    int
    main()
{
    int year;
    cin >> year;

    while (true)
    {
        year++;
        if (isBeautiful(year))
        {
            cout << year << endl;
            break;
        }
    }
    return 0;
}

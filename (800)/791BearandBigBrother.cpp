#include<iostream>
using namespace std;

int main(){
    int YoungerBrotherWeight, OlderBrotherWeight;
    cin >> YoungerBrotherWeight >> OlderBrotherWeight;
    int years = 0;
    while (true)
    {
        YoungerBrotherWeight = YoungerBrotherWeight * 3;
        OlderBrotherWeight = OlderBrotherWeight * 2;
        years++;
        if (YoungerBrotherWeight > OlderBrotherWeight)
        {
            break;
        }
    }

    cout << years << endl;

    return 0;
}
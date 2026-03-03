#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    
    if (cin >> n >> k >> l >> c >> d >> p >> nl >> np) {
        int total_drink_toasts = (k * l) / nl;
        int total_lime_toasts = (c * d);
        int total_salt_toasts = p / np;
        
        int max_total_toasts = min({total_drink_toasts, total_lime_toasts, total_salt_toasts});
        
        cout << max_total_toasts / n << endl;
    }
    
    return 0;
}
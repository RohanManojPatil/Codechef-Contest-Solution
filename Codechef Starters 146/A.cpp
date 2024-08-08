#include <bits/stdc++.h>
using namespace std;

int main() {
    int gold, silver, bronze;
    cin >> gold >> silver >> bronze;
    
    int ans = (5-gold) + (5-silver) + (5-bronze);
    
    cout << ans;
    
    return 0;
}

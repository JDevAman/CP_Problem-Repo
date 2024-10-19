#include <bits/stdc++.h>
using namespace std;

#define int long long int

void cpp() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n; 
    cin >> n;
    
    int lastX = 0, lastY = 0;
    double totalCost = 0;
    
    while (n--) {
        int currX, currY;
        cin >> currX >> currY;
        
        double reqdX = pow(currX - lastX, 2);
        double reqdY = pow(currY - lastY, 2);
        
        totalCost += sqrt(reqdX + reqdY);
        
        lastX = currX;
        lastY = currY;
    }

    int currX = 0, currY = 0;
    double reqdX = pow(currX - lastX, 2);
    double reqdY = pow(currY - lastY, 2);
    totalCost += sqrt(reqdX + reqdY);
    
    cout << fixed << setprecision(6) << totalCost << endl;
}

signed main() {
    cpp();
    solve();  // Only one test case
    return 0;
}

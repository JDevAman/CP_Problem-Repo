#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define vi vector<int>
#define si set<int>
#define mi map<int,int>
#define pi pair<int, int>

void cpp(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    lli n; 
    cin >> n;
    si yZero, yOne;

    for(int i = 0; i < n; i++) {
        lli x, y;
        cin >> x >> y;
        if(y == 0) yZero.insert(x);
        else yOne.insert(x);
    }

    lli ans = 0;

    // Check for each x in yOne
    for(auto x: yOne) {
        if(yZero.find(x) != yZero.end())  ans += (yZero.size() - 1);
        if(yZero.find(x-1) != yZero.end() && yZero.find(x+1) != yZero.end())   ans ++;   
    }

    // Check for each x in yZero
    for(auto x: yZero) {
        if(yOne.find(x) != yOne.end())   ans += (yOne.size() - 1);
        if(yOne.find(x-1) != yOne.end() && yOne.find(x+1) != yOne.end()) ans ++;
        
    }

    cout << ans << endl;
}

int main() {   
    cpp(); 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void haribhakt(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n, k, x;
    cin >> n >> k >> x;
    
    // If k = 1 and x = 1, we cannot form any other number than 1, so we cannot make n > 1
    if (k == 1 && x == 1) { 
        cout << "NO" << endl; 
        return; 
    }
    
    // If x is not equal to 1, we can use 1 freely
    if (x != 1) {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 0; i < n; ++i) {
            cout << 1 << " ";
        }
        cout << endl;
        return;
    }
    
    // If x == 1, we cannot use 1, so we use 2 if possible
    if (x == 1) {
        // IF even
        if (n % 2 == 0) {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; ++i) {
                cout << 2 << " ";
            }
            cout << endl;
        } 
        // If n is odd & K >= 3
        else if (k >= 3) {
            // If n is odd and we have at least 3 as an option, we can use 3 once and the rest as 2s
            cout << "YES" << endl;
            cout << (n / 2) << endl;
            cout << 3 << " ";
            for (int i = 1; i < n / 2; ++i) {
                cout << 2 << " ";
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

signed main() {   
    haribhakt(); 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

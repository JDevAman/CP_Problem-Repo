#include <bits/stdc++.h>
using namespace std;

#define int long long int

void cpp(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    string s, t; 
    cin >> s >> t;

    if (s == t) {
        cout << 0 << endl; 
        return;
    }

    int m = s.length(), n = t.length();
    int i = 0;

    while (i < m && i < n) {
        if (s[i] != t[i]) {
            cout << i + 1 << endl;
            return;
        }
        i++;
    }

    cout << i + 1 << endl;
}

signed main() {
    cpp(); 
    solve();  // Only one test case
    return 0;
}

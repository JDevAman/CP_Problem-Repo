#include <bits/stdc++.h>
using namespace std;

#define lli long long int

void cpp(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    string s, t; 
    cin >> s >> t;

    // If both strings are already the same, no transformation is needed
    if (s == t) {
        cout << 0 << endl;
        return;
    }

    vector<string> result;
    vector<lli> gre, les; 
    lli len = s.size();

    for (lli i = 0; i < len; i++) {
        if (s[i] > t[i]) gre.push_back(i);
        if (s[i] < t[i]) les.push_back(i);
    }

    for (auto idx : gre) {
        s[idx] = t[idx];
        result.push_back(s);
    }

    for (lli idx = les.size() - 1; idx >= 0; idx--) {
        s[les[idx]] = t[les[idx]];
        result.push_back(s);
    }

    lli n = result.size();
    cout << n << endl;
    for (const auto& tmp : result) {
        cout << tmp << endl;
    }
}

int main() {   
    cpp(); 
    int t = 1;

    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

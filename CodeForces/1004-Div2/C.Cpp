#include <bits/stdc++.h>
using namespace std;

#define yes cout << "Yes" << endl
#define no cout << "No" << endl

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    int x; cin>>x;
    
    a[0] = min(a[0], x-a[0]);
    a[n-1] = max(a[n-1], x-a[n-1]);
    for(int i=1; i<n-1; i++){
        if(max(a[i], x-a[i]) < a[i-1]){ no; return; }
        else a[i] = min(a[i], x-a[i]);
    }
    yes;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

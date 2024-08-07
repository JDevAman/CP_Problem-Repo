#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
typedef vector<int> vli;

void solve() {
    int n; cin>>n;
    int largest = 0, secondLargest = 0, lIdx = 0, slIdx = 0;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        if(x > largest){ secondLargest = largest; largest = x; slIdx = lIdx; lIdx = i; } 
        else if(x < largest && x > secondLargest){ secondLargest = x; slIdx = i;}
    }

    cout<<slIdx + 1<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
typedef vector<int> vli;

void solve() {
    int n,s,m; cin>>n>>s>>m;
    vector<pair<int, int>> tasks;

    for(int i=0; i<n; i++){
        int st, end; cin>>st>>end;
        tasks.push_back({st, end});
    }

    sort(tasks.begin(), tasks.end());

    int maxDiff = max(0, tasks[0].first);
    for(int i=1; i<n; i++){
        maxDiff = max(maxDiff, tasks[i].first - tasks[i-1].second);
    }
    maxDiff = max(m - tasks[n-1].second, maxDiff);

    if(maxDiff >= s) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

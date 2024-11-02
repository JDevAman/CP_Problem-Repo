#include <bits/stdc++.h>
using namespace std;

#define int long long int

void cpp() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int type; cin>>type;
    // qi, ri
    vector<pair<int, int>> gType;
    // dj % qi = ri
    for(int i=0; i<type; i++){
        int qi, ri; cin>>qi>>ri;
        gType.push_back({qi, ri});
    }

    int dates; cin>>dates;
    for(int i=0; i<dates; i++){
        int type, date; cin>>type>>date;
        int qi = gType[type-1].first, ri = gType[type-1].second;
        int ans = ((date/qi)*qi + ri);
        if(ans < date) ans += qi; 
        cout<<ans<<endl;
    }

}

signed main() {
    cpp();
    solve();  // Only one test case
    return 0;
}

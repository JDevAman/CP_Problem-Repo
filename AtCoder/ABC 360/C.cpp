#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
#define int long long
#define double long double
#define read(x) int x; cin >> x
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
typedef unordered_map<int, int> mli;
typedef vector<int> vli;
typedef pair<int, int> pli;

// Optional comparator function for sorting pairs
bool comp(const pli &a, const pli &b) {
    if (a.F == b.F) {
        return a.S < b.S;
    } else {
        return a.F < b.F;
    }
}

void solve() {
    int n; cin>>n;
    vector<int> boxes(n), weights(n);
    map<int, int> mp;
    for(int i=0; i<n; i++){
        cin>>boxes[i];
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        cin>>weights[i];
        if(mp.find(boxes[i]) != mp.end()){
            int wt = mp[boxes[i]];
            if(weights[i] > wt){
                ans += wt;
                mp[boxes[i]] = weights[i];
            }
            else{
                ans += weights[i];
            }
        }
        mp.insert({boxes[i], weights[i]});
    }
    cout<<ans<<endl;
}

signed main() {     
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // Uncomment the following line if there are multiple test cases
    // cin >> t;
    while (t--)
        solve();
    return 0;
}

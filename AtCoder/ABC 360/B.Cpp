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
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();

    // Possible values of window
    for (int w = 1; w < n; ++w) {
        // window size = w
        for (int c = 1; c <= w; ++c) {
            string possible_string;
            for (int start = 0; start < n; start += w) {
                if (start + c - 1 < n) {
                    possible_string += s[start + c - 1];
                }
            }
            if (possible_string == t) {
                yes;
                return;
            }
        }
    }
    no;
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

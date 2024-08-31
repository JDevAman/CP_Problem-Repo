#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
typedef vector<int> vli;

void solve() {
    int n;
    cin >> n;
    vector<pair<string, int>> stringWord;
    int maxLength = 0;
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int len = s.size();
        stringWord.push_back({s, len});
        if (len > maxLength) {
            maxLength = len;
        }
    }

    vector<string> ans;
    for (int i = 0; i < maxLength; i++) {
        string temp;
        for (int j = n - 1; j >= 0; j--) {
            if (stringWord[j].second > i) {
                temp.push_back(stringWord[j].first[i]);
            } else {
                temp.push_back('*');
            }
        }
        ans.push_back(temp);
    }

    for (auto &it : ans) {
        while (!it.empty() && it.back() == '*') {
            it.pop_back();
        }
        cout << it << endl;
    }
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

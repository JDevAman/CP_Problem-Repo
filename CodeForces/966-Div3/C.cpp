#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;

        if (s.size() != n) {
            cout << "No" << endl;
            continue;
        }

        // a - 5, a - 7 X
        // 5 - a, 5 - b X
        unordered_map<char, int> charToNum;
        unordered_map<int, char> numToChar;
        bool flag = true;

        for (int j = 0; j < n; j++) {
            char ch = s[j];
            int num = nums[j];

            if (charToNum.count(ch) == 0 && numToChar.count(num) == 0) {
                charToNum[ch] = num;
                numToChar[num] = ch;
            } else {
                if (charToNum[ch] != num || numToChar[num] != ch) {
                    flag = false;
                    break;
                }
            }
        }

        if (flag) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();

    vector<vector<int>> leftCount(n, vector<int>(26, 0)), rightCount(n, vector<int>(26, 0));

    // Fill leftCount: how many times each character appeared before index i
    for (int i = 1; i < n; i++) {
        leftCount[i] = leftCount[i - 1];
        leftCount[i][s[i - 1] - 'A']++;
    }

    // Fill rightCount: how many times each character appeared after index i
    for (int i = n - 2; i >= 0; i--) {
        rightCount[i] = rightCount[i + 1];
        rightCount[i][s[i + 1] - 'A']++;
    }

    long long count = 0;

    // Traverse each j as the middle character
    for (int j = 1; j < n - 1; j++) {
        for (int c = 0; c < 26; c++) {
            count += (long long)leftCount[j][c] * (long long)rightCount[j][c];
        }
    }

    // for (int i = 0; i < n - 2; i++) {
    //     for (int k = i + 2; k < n; k++) {
    //         if (s[i] == s[k]) {
    //             count += (k - i - 1);
    //         }
    //     }
    // }

    // cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}

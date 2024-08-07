    #include <bits/stdc++.h>
    using namespace std;

    #define int long long
    #define yes cout << "Yes" << endl
    #define no cout << "No" << endl
    typedef vector<int> vli;
   

    void solve() {
        int l, r;
        cin >> l >> r;
        vector<int> threePower(13);
        threePower[0] = 1;
        for (int i = 1; i < 13; i++) {
            threePower[i] = 3 * threePower[i - 1];
        }

        int ans = 0, temp = 0;
        for (int i = 0; i < 13; i++) {
            if (l < threePower[i]) {
                temp = i;
                break;
            }
        }

        ans += (2 * temp);

        int i = l + 1;
        while (i <= r) {
            temp = 0;
            for (int j = 0; j < 13; j++) {
                if (i < threePower[j]) {
                    temp = j;
                    break;
                }
            }

            if (threePower[temp] <= r) {
                ans += (threePower[temp] - i) * temp;
                i = threePower[temp];
            } else {
                ans += (r - i + 1) * temp;
                break;
            }
        }

        cout << ans << endl;
    }

    signed main() {
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

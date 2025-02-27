#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define si set<int>
#define mi map<int,int>
#define pi pair<int, int>
# define yes cout<<"Yes"<<endl
# define no cout<<"No"<<endl

void cpp(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// Find biggest window with unique chracters.
void solve() {
    int n; cin >> n;
    vector<int> nums(n);
    map<int, int> freq;
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        freq[nums[i]]++;
    }

    int maxLen = 0, start = -1, end = -1;
    int i = 0, j = 0;

    while (j < n) {
        if (freq[nums[j]] != 1) { 
            if (j - i > maxLen) {
                maxLen = j - i;
                start = i;
                end = j - 1;
            }
            i = j + 1; 
        }
        j++;
    }

    if (j - i > maxLen) {
        maxLen = j - i;
        start = i;
        end = j - 1;
    }

    if (start > end || start == -1) {
        cout << 0 << endl; 
    } else {
        cout << start + 1 << " " << end + 1 << endl; 
    }
}


signed main() {    
    cpp(); 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}


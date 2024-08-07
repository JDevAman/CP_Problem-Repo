#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
typedef vector<int> vli;

void solve() {
    int sun1, sun2, sl1,sl2; cin >>sun1>>sun2>>sl1>>sl2;
    int wins = 0;
    //Case 1: r1 - sun1, sl1 | r2 - sun2, sl2
    if((sun1 > sl1 && sun2 >= sl2) || (sun1 >= sl1 && sun2 > sl2)){
        wins++;
    }


    //Case 2: r1 - sun1, sl2 | r2 - sun2, sl1
        if((sun1 > sl2 && sun2 >= sl1) || (sun1 >= sl2 && sun2 > sl1)){
        wins++;
    }
    //Case 3: r1 - sun2, sl1 | r2 - sun1, sl2
        if((sun2 > sl1 && sun1 >= sl2) || (sun2 >= sl1 && sun1 > sl2)){
        wins++;
    }
    //Case 4: r1 - sun2, sl2 | r2 - sun1, sl1
    if((sun2 > sl2 && sun1 >= sl1) || (sun2 >= sl2 && sun1 > sl1)){
        wins++;
    }
    cout<<wins<<endl;
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

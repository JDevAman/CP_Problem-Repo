#include <bits/stdc++.h>
using namespace std;

void cpp() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n; 
    cin >> n;  // Number of toys
    vector<int> toys(n), boxes(n-1); // n toys, n-1 boxes

    // Input toy sizes
    for (int i = 0; i < n; i++) {
        cin >> toys[i];
    }

    // Input box sizes
    for (int i = 0; i < n - 1; i++) {
        cin >> boxes[i];
    }

    sort(toys.begin(), toys.end());
    sort(boxes.begin(), boxes.end());
    int x = toys[0];
    bool flag = false;
    int i=n-1, j=n-2;
    while(j >=0 && i >= 0){
        if(boxes[j] >= toys[i]){
            i--; j--;
        }
        else{
            if(flag){
                cout<<-1<<endl; return;
            }
            // skip current character
            x = toys[i];
            flag = true;
            i--;
        }
    }

    // The remaining toy must go into the new box
    // toys[matchedToys] will give us the smallest toy that could not be placed
    cout << x << endl;
}

int main() {
    cpp();
    int t = 1;  // Only one test case
    while (t--) {
        solve();
    }
    return 0;
}

// You are given an array A  of length  N.
//  Determine if it is possible to make all the elements of A equal by performing the following operation any number of times (possibly, zero): 
//  Choose two distinct indices i  and j ( 1 ≤ i , j ≤ N 1≤i,j≤N, i ≠ j i=j); 
//  Update the value at index i  by setting A i ​ to Ai ​+ Aj.

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
typedef vector<int> vli;

void solve() {
    int n; cin>>n;
    map<int, int> freq;
    
    for(int i=0; i<n; i++){
        int x; cin>>x;
        freq[x]++;
    }
    
    int len = freq.size();
    if(len > 2){
        cout<<"No"<<endl;
        
    }
    else{
        if(freq.find(0) == freq.end() && len == 2) {
            cout<<"No"<<endl;
          
        }
        else{
            cout<<"Yes"<<endl;
            
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

#include <bits/stdc++.h>
using namespace std;

#define lli long long int
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

void solve() {
    int n; cin>>n;
    vector<vector<int>> grid(n, vector<int>(n, -1));
    for(int i=0; i<n; i++){
    	for(int j=0; j<=i; j++){
    		cin>>grid[i][j];
    		grid[i][j] -= 1;
    	}
    }

    int i = 0;
    for(int j=0; j<n; j++){
    	if(i >= j) i = grid[i][j];
    	else i = grid[j][i];
    }
    cout<<i+1<<endl;
}

int main() {   
    cpp(); 
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}


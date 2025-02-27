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

int digitSum(int num){
    if(num == 0) return 0;
    return 1 + (num-1)%9;
}
void solve() {
    int x, y; cin>>x>>y;
    if(y - x == 1){ yes; return; }
    if(y == x){ no; return; }
    else{
        int temp = digitSum(x+1);
        if(y == temp && x+1 > y){ yes; return; }   
    }
    no;     
}

int main() {   
    cpp(); 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}


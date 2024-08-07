// Alice and Bob are playing a game. They have with them a binary string S .  Alice and Bob alternate making moves, with Alice going first.
//  On their turn, a player does the following:  Choose a non-empty contiguous substring of S  all of whose characters are the same, delete it from S , and concatenate the remaining parts. 
// More formally, choose integers L  and R such that 1 ≤ L ≤ R ≤ ∣ S ∣ 1≤L≤R≤∣S∣ .
//  Alice wins immediately when S  doesn't contain any occurrence of 1 , while Bob wins immediately when S doesn't contain any occurrence of 0 .
//  Both players will play to win. Note that if the string initially doesn't contain any occurrences of 0 0, Bob wins before any moves are made.
//   Bob wants to win the game, so before the game starts, he can flip some characters of S. That is, Bob can choose an index i i ( 1 ≤ i ≤ N 1≤i≤N), and set S i​ to 0 if it was originally 1, and vice versa. 
//  Find the minimum number of flips Bob needs to make to ensure he can win.

// Rating -1450

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
typedef vector<int> vli;

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    int prev = -1;

    if(n == 1){
        if(s[0] == '1') cout<<0<<endl;
        else cout<<1<<endl;
        return;
    }
    
    int cnsZeros = 0, cnsOnes = 0;
    for(int i=0; i<n; i++){
        if(prev == -1){
            if(s[i]-'0' == 0){
                prev = 0;
                cnsZeros++;
            }
            else{
                prev = 1;
                cnsOnes++;
            }
        }
        else{
            if(s[i] - '0' == 0){
                if(prev){ cnsZeros++; prev = 0; }
            }   
            else{
                if(!prev){ cnsOnes++; prev = 1; }
            }
        }
    }

    if(cnsZeros > cnsOnes) cout<<2<<endl;
    else if(cnsZeros == cnsOnes) cout<<1<<endl;
    else cout<<0<<endl;
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

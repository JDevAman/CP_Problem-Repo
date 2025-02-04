

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define si set<int>
#define mi map<int, int>
#define pi pair<int, int>

#define pq_min priority_queue<int, vector<int>, greater<int>> 
#define pq_max priority_queue<int>

#define yes cout << "Yes" << endl
#define no cout << "No" << endl

void haribhakt_fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

class SnakeQueue {
private:
    deque<pair<int, int>> snakeQ;
    long long offset = 0;         

public:
    void addSnake(int length) {
        if (snakeQ.empty()) {
            snakeQ.push_back({0, length});
        } else {
            int newHead = snakeQ.back().first + snakeQ.back().second;
            snakeQ.push_back({newHead, length});
        }
    }

    void removeSnake() {
        if (!snakeQ.empty()) {
            offset += snakeQ.front().second;
            snakeQ.pop_front();
        }
    }

    long long querySnake(int k) {
        return snakeQ[k - 1].first - offset;
    }
};

void solve() {
    int Q;
    cin >> Q;
    SnakeQueue sq;

    while (Q--) {
        int queryType;
        cin >> queryType;

        if (queryType == 1) {
            int l;
            cin >> l;
            sq.addSnake(l);
        } else if (queryType == 2) {
            sq.removeSnake();
        } else if (queryType == 3) {
            int k;
            cin >> k;
            cout << sq.querySnake(k) << endl;
        }
    }
}

signed main() {
    haribhakt_fastio();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}

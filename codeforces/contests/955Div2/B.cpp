#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pll pair<long, long>
#define pii pair<int, int>

#define FOR(x,to) for(x=0;x<(to);x++)
#define FORR(x,arr) for(auto& x:arr)
#define FORR2(x,y,arr) for(auto& [x,y]:arr)
#define ALL(a) (a.begin()),(a.end())

const ll MOD = 1e9 + 7;

void solve() {
    ll x, y, k; cin >> x >> y >> k;
    ll s = y - x % y;

    bool f = 0;
    while (x != 1) {
        if (k >= s) {
            k -= s;
            x += s;
            while (x % y == 0)
                x /= y;
            s = y - x % y;
        } 
        else {
            cout << x + k << endl;
            return;
        }
    }

    cout << k % (y - 1) + 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

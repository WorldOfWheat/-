#include <bits/stdc++.h>
#define int long long
#define vv vector<vector<int>>
#define pii pair<int, int>
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define rep(x, y ,z) for(int x = y; x < z; x++)
#define rep2(x, y ,z) for(int x = y; x <= z; x++)
#define rrep(x, y ,z) for(int x = y; x >= z; x--)
#define ln "\n"
#define sp " "

using namespace std;

int qpow(int x, int y, int mod) {
    int res = 1;
    while (y > 0) {
        if (y & 1) {
            res *= x;
            res %= mod;
        }
        y >>= 1;
        x *= x;
        x %= mod;
    }
    return res;
}

void solve() {
    int n, m;
    cin >> n >> m;
    rep (i, 0, n) {
        int a;
        cin >> a;
        cout << (qpow(a, m-2, m)) << sp;
    }
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}

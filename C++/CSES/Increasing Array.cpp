#include <bits/stdc++.h>
#define int long long
#define V vector<int>
#define VV vector<V>
#define VP vector<pii>
#define VVP vector<VP>
#define pii pair<int, int>
#define F first
#define S second
#define rep(x, y, z) for(int x = y; x < z; x++)
#define rep2(x, y, z) for(int x = y; x <= z; x++)
#define rrep(x, y, z) for(int x = y; x >= z; x--)
#define sp " "
#define ln "\n"

using namespace std;

int n;
V ve;

void solve() {

    cin >> n;

    ve.resize(n);

    rep (i, 0, n) {
        cin >> ve[i];
    }

    int ans = 0;
    rep (i, 1, n) {
        if (ve[i] < ve[i-1]) {
            ans += abs(ve[i] - ve[i-1]);
            ve[i] = ve[i-1];
        }
    }

    cout << ans << ln;

}

signed main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;

}

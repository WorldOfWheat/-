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
#define INF (int) 1e18
#define ln '\n'

using namespace std;

int n;
V ve;

void solve() {

    cin >> n;

    ve.resize(n);
    rep (i, 0, n) {
        int in;
        cin >> in;

        ve[--in] = i;
    }

    int ans = 1;
    rep (i, 1, n) {
        if (ve[i] <= ve[i-1]) {
            ans++; 
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


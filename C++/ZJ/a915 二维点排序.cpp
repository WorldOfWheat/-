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
#define INF (int) 1e18

using namespace std;

int n;
VP ve;

void solve() {

    cin >> n;
    ve.resize(n);

    rep (i, 0, n) {
        int a, b;
        cin >> a >> b;

        ve[i] = {a, b};
    }

    sort(ve.begin(), ve.end());

    for (auto i : ve) {
        cout << (i.F) << sp << (i.S) << ln;
    }

}

signed main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;

}

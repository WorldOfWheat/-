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

int n, m;

void solve() {

    cin >> n >> m;

    if ((n + m) %3 == 0 && (min(n, m) * 2 >= max(n, m))) {
        cout << "YES" << ln;
    }
    else {
        cout << "NO" << ln;
    }

}

signed main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();

    return 0;

}

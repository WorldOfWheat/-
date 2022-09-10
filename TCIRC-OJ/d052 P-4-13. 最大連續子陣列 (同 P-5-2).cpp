#include <bits/stdc++.h>
#define int long long
#define V vector<int>
#define vv vector<vector<int>>
#define pii pair<int, int>
#define F first
#define S second
#define pb push_back
#define rep(x, y ,z) for(int x = y; x < z; x++)
#define rep2(x, y ,z) for(int x = y; x <= z; x++)
#define rrep(x, y ,z) for(int x = y; x >= z; x--)
#define ln "\n"
#define sp " "
#define MAXN (LLONG_MAX - 1)

using namespace std;

V ve;

void solve() {
	
	int n;
	cin >> n;
	ve.resize(n);
	rep (i, 0, n) {
		cin >> ve[i];
	}

	int ans = 0;
	int maxi = 0;
	rep (i, 0, n) {
		maxi = max(0ll, maxi+ve[i]);
		ans = max(ans, maxi);
	}

	cout << ans << ln;

}

signed main() {
    
	ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;

}

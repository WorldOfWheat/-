#include <bits/stdc++.h>
#define int long long
#define V vector<int>
#define VP vector<pii>
#define VV vector<vector<int>>
#define pii pair<int, int>
#define F first
#define S second
#define rep(x, y ,z) for(int x = y; x < z; x++)
#define rep2(x, y ,z) for(int x = y; x <= z; x++)
#define rrep(x, y ,z) for(int x = y; x >= z; x--)
#define ln "\n"
#define sp " "
#define INF (int) 1e18
#define MOD (int) 1e9 + 9

using namespace std;

V ve;
V dp;

void solve() {

	int n, m;
	cin >> n >> m;
	
	ve.resize(n);
	dp.resize(n+1);
	
	rep (i, 0, n) {
		cin >> ve[i];
	}

	int maxi = -INF;
	rep2 (i, 1, m) {
		maxi = max(maxi, ve[i-1]);
		dp[i] = maxi;
	}

	rep2 (i, m+1, n) {		
		dp[i] = max(dp[i-m-1] + ve[i-1], dp[i-1]);
	}

	cout << (dp[n]) << ln;

}

signed main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	solve();

	return 0;

}
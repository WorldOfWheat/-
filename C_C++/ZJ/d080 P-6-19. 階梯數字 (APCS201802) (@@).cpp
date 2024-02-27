#include <bits/stdc++.h>
#define int long long
#define VP vector<pii>
#define V vector<int>
#define VV vector<V>
#define pii pair<int, int>
#define F first
#define S second
#define rep(x, y ,z) for(int x = y; x < z; x++)
#define rep2(x, y ,z) for(int x = y; x <= z; x++)
#define rrep(x, y ,z) for(int x = y; x >= z; x--)
#define ln "\n"
#define sp " "
#define INF (int) 1e18

using namespace std;

V ve;
vector<VV> dp;

int dfs(int x, int y) {

	if (dp[x][y][0] != -1) {
		return dp[x][y][0];
	}

	if (x == 0) {
		return 1;
	}

	int res = 0;

	rep2 (i, y, 9) {
		res += dfs(x - 1, i);
	}

	return dp[x][y][0] = res;

}

int dfs2(int x, int y) {

	if (dp[x][y][1] != -1) {
		return dp[x][y][1];
	}

	if (x == 0) {
		return 1;
	}

	int res = 0;
	
	rep (i, y, ve[x-1]) {
		res += dfs(x - 1, i);
	}

	if (ve[x-1] >= y) {
		res += dfs2(x - 1, ve[x-1]);
	}

	return dp[x][y][1] = res;

}

void solve() {
	
	int n;

	cin >> n;

	while (n > 0) {
		ve.push_back(n % 10);
		n /= 10;
	}

	dp.resize(ve.size() + 1, VV(9+1, V(2, -1)));

	int ans = 0;

	rep2 (i, 0, ve.back() - 1) {
		ans += dfs(ve.size() - 1, i);
	}

	ans += dfs2(ve.size() - 1, ve.back());

	cout << (ans - 1) << ln;

}

signed main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	solve();

	return 0;
	
}
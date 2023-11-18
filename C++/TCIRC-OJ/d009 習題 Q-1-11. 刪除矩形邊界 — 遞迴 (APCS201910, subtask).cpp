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

int n, m;
VV ve;

int dfs(int row, int column, int d, int r, int sum) {

	if (d - row == 0 || r - column == 0) {
		return sum;
	}

	int k = 0;
	int k2 = 0;
	int res = INF;
	
	rep2 (i, column, r) {
		if (ve[row][i]) {
			k++;
		}
		else {
			k2++;
		}
	}
	res = min(res, dfs(row+1, column, d, r, sum + min(k, k2)));

	k = k2 = 0;
	rep2 (i, column, r) {
		if (ve[d][i]) {
			k++;
		}
		else {
			k2++;
		}
	}
	res = min(res, dfs(row, column, d-1, r, sum + min(k, k2)));

	k = k2 = 0;
	rep2 (i, row, d) {
		if (ve[i][column]) {
			k++;
		}
		else {
			k2++;
		}
	}
	res = min(res, dfs(row, column+1, d, r, sum + min(k, k2)));

	k = k2 = 0;
	rep2 (i, row, d) {
		if (ve[i][r]) {
			k++;
		}
		else {
			k2++;
		}
	}
	res = min(res, dfs(row, column, d, r-1, sum + min(k, k2)));

	return res;

}

void solve() {

	cin >> n >> m;
	
	ve.resize(n, V(m));

	rep (i, 0, n) {
		rep (j, 0, m) {
			cin >> ve[i][j];
		}
	}

	cout << (dfs(0, 0, n-1, m-1, 0)) << ln;

}

signed main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	solve();

	return 0;
	
}
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

using namespace std;

struct player {
	int start;
	int end;
	int value;
};

vector<player> ve;
V dp;

int bSearch(int l, int r, int x) {

	if (l > r) {
		return l;
	}

	int mid = (l + r) / 2;

	if (ve[mid].end >= x) {
		return bSearch(l, mid-1, x);
	}
	else {
		return bSearch(mid+1, r, x);
	}

}

void solve() {

	int n;

	cin >> n;

	ve.resize(n);
	dp.resize(n+1);

	rep (i, 0, n) {
		cin >> ve[i].start >> ve[i].end >> ve[i].value;
	}

	sort(ve.begin(), ve.end(), [](player x, player y) {
		return x.end < y.end;
	});

	rep2 (i, 1, n) {
		player top = ve[i-1];

		int j = bSearch(0, i-1, top.start);
	
		if (j == 0) {
			dp[i] = top.value;
		}
		else {
			dp[i] = dp[j] + top.value;
		}

		dp[i] = max(dp[i], dp[i-1]);
	}

	cout << (dp[n]) << ln;

}

signed main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	solve();

	return 0;

}
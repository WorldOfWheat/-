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

using namespace std;

int n, m;
V ve;

bool check(int x) {
	int now = x;
	int cnt = 0;
	rep (i, 0, n) {
		if (x < ve[i]) {
			return false;
		}
		if (now < ve[i]) {
			cnt++;
			now = x;
		}
		now -= ve[i];
	}
	if (now <= 0) {
		cnt++;
	}
	return cnt <= m;
}

int _binary_search(int l, int r) {
	if (l > r) {
		return l;
	}
	int mid = (l + r) >> 1;
	if (check(mid)) {
		return _binary_search(l, mid-1);
	}
	else {
		return _binary_search(mid+1, r);
	}
}

void solve() {
	cin >> n >> m;
	ve.resize(n);
	rep (i, 0, n) {
		cin >> ve[i];
	}
	cout << (_binary_search(1, 1e18)) << ln;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}

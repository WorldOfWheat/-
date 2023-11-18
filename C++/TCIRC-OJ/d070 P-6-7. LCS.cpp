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

VV dp;

void solve() {
	
	string str, str2;
	
	cin >> str >> str2;

	int len = str.length();
	int len2 = str2.length();

	dp.resize(len+1, V(len2+1));

	rep2 (i, 1, len) {
		rep2 (j, 1, len2) {
			char top = str[i-1];
			char top2 = str2[j-1];

			if (top == top2) {
				dp[i][j] = dp[i-1][j-1] + 1;
				continue;
			}

			dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}	
	}

	cout << (dp[len][len2]) << ln;

}

signed main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	solve();

	return 0;

}
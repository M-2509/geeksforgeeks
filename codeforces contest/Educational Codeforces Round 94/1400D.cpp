
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
#define f1(i,a,b) for(int i=a;i<b;i++)

using namespace std;

const int _N = 3005;
int _a[_N];
long long _cnt[_N], _cnt_2[_N];

void solve() {
	register int i, j, n, x;
	register long long ans = 0ll, sum = 0ll;
	cin >> n;
	for (i = 1; i <= n; ++i) _cnt[i] = 0ll;
	for (i = 1; i <= n; ++i) {
		cin >> _a[i];
		++_cnt[_a[i]];
	}
	for (i = 1; i < n; ++i) {
		_cnt[_a[i]] -= 2;
		ans = 0ll;
		for (j = 1; j <= n; ++j) _cnt_2[j] = 0ll;
		for (j = i + 1; j < n; ++j) {
			x = _a[j];
			if (x == _a[i]) sum += ans;
			ans -= _cnt_2[x] * (_cnt[x] - _cnt_2[x]);
			++_cnt_2[x];
			ans += _cnt_2[x] * (_cnt[x] - _cnt_2[x]);
		}
		++_cnt[_a[i]];
	}
	cout << sum << '\n';
}


int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		solve();
	}
	return 0;
}

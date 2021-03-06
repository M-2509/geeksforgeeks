
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

using namespace std;

void solve() {
	int p, f;
	cin >> p >> f;
	int cs, cw, s, w;
	cin >> cs >> cw >> s >> w;
	int  ans = 0;
	if (w < s)
	{
		swap(w, s);
		swap(cs, cw);
	}
	for (int i = 0; i <= cs; ++i)
	{
		if (i*s > p)
		{
			break;
		}
		int current = i, current_w = min(cw, (p-i*s)/w);
		int temp = min(cs - current, f/s);
		int temp2 = min((f-s*temp)/w, cw - current_w);

		ans = max(ans, current_w+ current + temp+temp2);
	}
	cout<<ans<<endl;

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

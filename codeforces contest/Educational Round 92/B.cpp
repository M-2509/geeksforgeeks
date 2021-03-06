
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

	ll n, k, z;
	ll dp[100002][6];

	ll solution(vll & a, int i, int kk, int zz){
		if (kk==0 || i>=n || i<0)
			return 0;
		if (dp[i][zz] != -1)
			return dp[i][zz];
		ll val =0;
		if (i<n)
			val = max(val,a[i]+ solution(a, i+1, kk-1, zz));
		if (i>=0 && zz>0)
			val = max(val, a[i]+ solution(a, i-1, kk-1, zz-1));
		return dp[i][zz] = val;
	}

	void solve(){
		cin>>n>>k>>z;
		vll a(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		memset(dp, -1, sizeof(dp));
		ll x = solution(a, 1, k, z)+a[0];
		cout<<x<<endl;
	}

	int main()
	{
		std::ios::sync_with_stdio(false);
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			solve();
		}
		return 0;
	}


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
	int main()
	{
		std::ios::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			int x,k;
			cin>>x>>k;
			int cnt=0;
			for (int i = 2; i*i<=x; ++i)
				while(!(x%i))
					cnt++, x/=i;
				if (x>1)
					cnt++;
				if (cnt>=k)
					cout<<1<<'\n';
				else
					cout<<0<<'\n';
					
		}
		return 0;
	}

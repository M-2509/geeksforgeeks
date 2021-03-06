
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

	int getMindifference(int arr[], int n, int k){
		if (n==1)
			return 0;
		sort(arr, arr+n);

		int ans = arr[n-1] - arr[0];
		int small = arr[0]+k;
		int big  = arr[n-1]-k;
		if (small>big)
			swap(small, big);
		for (int i = 1; i < n-1; ++i)
		{
			int substract = arr[i]-k;
			int add = arr[i]+k;
			if (substract >= small || add <= big) 
            	continue; 
        	if (big - substract <= add - small) 
            	small = substract; 
        	else
            	big = add; 
		}
		return min(ans, big - small);
	}

	int main()
	{
		std::ios::sync_with_stdio(false);
		int n;
		cin>>n;
		int k;
		cin>>k;
		int *arr = new int[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		cout<<getMindifference(arr,n, k)<<'\n';
		return 0;
	}

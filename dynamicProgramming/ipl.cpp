
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

int solve(int *arr, int n){
	int *sum = new int[n];

	if (n >= 1)
	{
		sum[0]= arr[0];
	}
	if (n >= 2)
	{
		sum[1]= arr[0]+ arr[1];
	}
	if (n >= 3)
	{
		sum[2]= max(sum[1], max(arr[1]+arr[2], arr[0]+arr[2]));
	}
	for (int i = 3; i < n; ++i)
	{
		sum[i] = max(sum[i-1], max(sum[i-2]+arr[i],arr[i]+ arr[i-1]+sum[i-3]));
	}
	return sum[n-1];
}

int main()
{
	std::ios::sync_with_stdio(false);
	int n;
	cin>>n;
	int *arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cout<<solve(arr, n)<<endl;
	return 0;
}
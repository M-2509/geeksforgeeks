
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
	std::ios::sync_with_stdio(false);
	int k;
    ostringstream str1; 
    cin>>k;
	str1 << k;
	if (k%2 == 0)
	{
		cout<<-1<<endl;
	}
		string k_string = str1.str();
		int length = sizeof(k_string);

		for (int i = length; i < k; ++i)
		{
			int num_string = '7'*i;
			int num = (int)num_string;
			if (num % k == 0)
			{
				cout<<i<<endl;
			}
	}
	return 0;
}
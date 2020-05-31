#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;cin>>t;
	while(t--)
	{
		long long int n,count=0;
		cin>>n;
		int k=5;
		while(n/k)
		{
		    count+=n/k;
		    k*=5;
		}
		cout<<count<<"\n";
	}
}

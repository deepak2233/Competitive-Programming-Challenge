#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,i;
		cin>>n>>m;
		vector <ll> arr(n);
		vector <ll> brr(n);
		for(i=0;i<n;i++)
		cin>>arr[i];
		for(i=0;i<n;i++)
		cin>>brr[i];
		ll max=0;
		for(i=0;i<n;i++)
		{
			ll k=m/arr[i];
			if(k*brr[i]>max)
			max=k*brr[i];
		}
		cout<<max<<"\n";
	}
	return 0;
}

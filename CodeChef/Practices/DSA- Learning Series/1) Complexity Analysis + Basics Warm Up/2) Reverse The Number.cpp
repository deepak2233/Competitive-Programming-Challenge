#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE 
	freopen("input.text", "r", stdin); 
	freopen("output.text", "w", stdout); 
#endif
	int t;
	cin>>t;
	while(t--)
	{
		int n,rem,rev=0;
		cin>>n;
		while(n!=0)
		{
			rem = n%10;
			rev=rev*10+rem;
			n=n/10;
		}
		cout<<rev<<"\n";
	}
    
}

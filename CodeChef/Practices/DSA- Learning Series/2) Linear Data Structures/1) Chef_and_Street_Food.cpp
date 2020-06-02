
/*Above allows us to compute profit by opening each type of store and calculating the maximum profit among them. 
So now we focus on calculating profit from opening a store of one type.

For a food type, 'P' people are interested to buy, 'S' stores already exist for the same type of food
and Chef earns 'V' per unit of food. So, after Chef opens a store of this food type, 
the number of stores become S+1 and the number of people buying from Chef’s store would be  P/(S+1)
Hence, the Chef’s profit becomes V * P/{S+1}.
We can take the maximum over all the food types and print maximum.*/


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
		int n;
		cin>>n;
		int max_profit = INT_MIN;
		while(n--)
		{
			int S, P, V, res = 0;
			cin >> S >> P >> V;

			res = P/(S+1) * V;

			if(res > max_profit)
			{
				max_profit = res;
			}
		}
		cout<<max_profit<<"\n";

	}
    
}

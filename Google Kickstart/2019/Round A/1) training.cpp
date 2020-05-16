#include <bits/stdc++.h>
using namespace std;
int CASES;
int n, k, a[100010];
int main()
{
#ifndef ONLINE_JUDGE 
 	freopen("input.text", "r", stdin); 
 	freopen("output.text", "w", stdout); 
#endif
	scanf("%d", &CASES);
	for (int CASE = 1; CASE <= CASES; CASE++)
	{
		scanf("%d%d", &n, &k);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		sort(a, a+n);
		int sum = 0;
		int ans = 1e9;
		for (int i = 0; i < n; i++)
		{
			sum += a[i];
			if (i >= k)
			{
				sum -= a[i-k];
			}
			if (i >= k-1)
			{
				int am = a[i]*k - sum;
				ans = min(ans, am);
			}
		}
		printf("Case #%d: ", CASE);
		printf("%d\n", ans);
	}
}

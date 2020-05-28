/*##QUICK EXPLANATION:
###The answer is, We can derive sera series as you can bellow :- 

* 2, 1, 4, 3,------, N, N−1                ( if N is EVEN)
* 2, 1, 4, 3,-------N−3, N−4, N−1, N, N−2  ( if N is ODD )*/

//After conclusion I can say for even, we can jump with 2num (increm.. ++2) and Print ##i+1 and i;
//and for ODD series nothing but it is a reinnovate version of Even series.

// {EVEN SERIES }..... + N+3+ N+2+ N+1....
 	
  
#include <bits/stdc++.h>
using namespace std;
int main(){
	
#ifndef ONLINE_JUDGE 
	freopen("input.text", "r", stdin); 
	freopen("output.text", "w", stdout); 
#endif
  int t; cin >> t;
  while (t--) {
    int n, odd = 0; cin >> n;
    if (n & 1) odd = 1, n -= 3;
    for (int i = 1; i <= n; i += 2) cout << i + 1 << " " << i << " ";
    if (odd) cout << n + 2 << " " << n + 3 << " " << n + 1 << " ";
    cout << endl;
  }
}
 .

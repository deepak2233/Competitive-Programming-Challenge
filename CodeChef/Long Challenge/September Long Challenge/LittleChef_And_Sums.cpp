/* If observed carefully, it can be seen that:

PrefixSum[i] + SuffixSum[i] = Sum of all elements in array + arr[i](Element at i-th index)

Since sum of all elements of the array will be the same for every index, therefore the value of PrefixSum[i] + SuffixSum[i] will be minimum for the minimum value of arr[i].

Therefore, the task reduces to find only the index of the minimum element of the array.

Below is the implementation of the above approach:*/


#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int ind=0;
        int min=arr[0];

        for(int i=0;i<n;i++)
        {
            if(min>arr[i])
            {
                min=arr[i];
                ind=i;
            }
        }
        cout<<ind+1<<"\n";
    }
}


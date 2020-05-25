
#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==0 || n==1)
    return 1;
    return n* fact(n-1);
}
int nCr(int n, int r)
{
    return fact(n)/fact(n-r)/fact(r);
}

int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            count++;
        }
    }
    if(count<k)
    {
        count=0;
        cout<<count<<"\n";
    }
    else
    cout<<nCr(count,k)<<"\n";
}

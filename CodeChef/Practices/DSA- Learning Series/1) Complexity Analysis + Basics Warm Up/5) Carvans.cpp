#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    ios_base::sync_with_stdio();
        cin.tie(0);
        cout.precision(10);
    int n;
    cin>>n;
    int arr[n];
    for(int_fast64_t i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0],count=0;
    for(int_fast64_t i=1;i<n;i++)
    {
        if(arr[i]<=max)
        {
            max=arr[i];
            count++;
        }
    }
    cout<<count+1<<endl;
    }
}

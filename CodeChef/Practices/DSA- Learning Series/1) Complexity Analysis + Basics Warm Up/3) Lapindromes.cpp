#include<iostream>
using namespace std;
#include<cstring>

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char S[1000];
        cin>>S;
        int l=strlen(S);
        int freq[26]={0};
        for(int i=0;i<l/2;i++)
        {
            freq[S[i]-97]++;
        }
        if(l%2==0)
        {
            for(int i=l/2;i<l;i++)
            {
                freq[S[i]-97]--;
            }
        }
        else
        {
            for(int i=(l/2)+1;i<l;i++)
            {
                freq[S[i]-97]--;
            }
        }
        int c=0;
        for(int i=0;i<26;i++)
        {
            if(freq[i]!=0)
            {
                c++;
            }
        }
        if(c==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}

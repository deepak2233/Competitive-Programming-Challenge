#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,act;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>act>>str1;
        int bonus=0;
        int rank,severity;
        while(act--)
        {
            cin>>str2;
            if(str2=="CONTEST_WON")
            {
                cin>>rank;
                if(rank<=20)
                    bonus+=300+20-rank;
                else
                    bonus+=300;
            }
            else if(str2=="TOP_CONTRIBUTOR")
            {
                bonus+=300;
            }
            else if(str2=="BUG_FOUND")
            {
                cin>>severity;
                bonus+=severity;
            }
            else if(str2=="CONTEST_HOSTED")
            {
                bonus+=50;
            }
        }
        if(str1=="INDIAN")
            cout<<bonus/200<<endl;
        else
            cout<<bonus/400<<endl;
    }
}

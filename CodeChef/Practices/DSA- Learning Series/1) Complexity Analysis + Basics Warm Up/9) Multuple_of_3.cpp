#include <bits/stdc++.h>
#define lli long long int
using namespace std;

bool find(lli sum){
if(sum%3==0){
    return true;
}
else{
    return false;
}
}

int main()
{
    lli t,k,d0,d1,i,d2,j,d3;
    cin>>t;
    while(t--){
        cin>>k>>d0>>d1;bool chk=false;
        d2=(d0+d1)%10;
        if(k>2){
        d3=(d0+d1+d2)%10;
        if(d3==0){
            chk=find(d0+d1+d2);
        }
        else{
            i=20*((k-3)/4);
            j=(k-3)%4;
            if(d3==2){while(j>0){i+=2;j--;if(j==0){break;}i+=4;j--;if(j==0){break;}i+=8;j--;}}
            else if(d3==4){while(j>0){i+=4;j--;if(j==0){break;}i+=8;j--;if(j==0){break;}i+=6;j--;}}
            else if(d3==8){while(j>0){i+=8;j--;if(j==0){break;}i+=6;j--;if(j==0){break;}i+=2;j--;}}
            else if(d3==6){while(j>0){i+=6;j--;if(j==0){break;}i+=2;j--;if(j==0){break;}i+=4;j--;}}
            chk=find(d0+d1+d2+i);
        }
        }
        else{
           chk=find(d0+d1);
        }
                if(chk){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

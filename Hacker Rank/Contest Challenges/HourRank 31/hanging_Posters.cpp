#include <bits/stdc++.h>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;

int main()
{

     ll num_Poster,height_Author;
     cin>>num_Poster>>height_Author;

     ll wall_point[num_Poster],len_Poster[num_Poster];

     for(ll i = 0; i < num_Poster; i++)
     {
         cin>>wall_point[i];
     }    
     
     for(ll i = 0; i < num_Poster; i++)
     {
         cin>>len_Poster[i];
     }    
      
     ll max_lad = 0;
    for(ll i = 0;i < num_Poster;i++){

        double l = (wall_point[i]-height_Author)-(double)len_Poster[i]*0.25;
        
        int ans = ceil(l);
        if(ans > max_lad){
            max_lad = ans;
        }
    }
    cout<<max_lad;
}

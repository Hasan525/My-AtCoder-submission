#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)





int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();



      ll x,y;cin>>x>>y;
      ll cnt=y-x;
      if(cnt>0)
      {
          ll rs=cnt/10;
          if(cnt%10)
            rs++;
          cout<<rs<<endl;
      }
      else
        cout<<0<<endl;
}

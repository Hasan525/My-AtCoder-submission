#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)
const ll mx=2007;





int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();


    ll n,q,x,y;
    cin>>n>>q;
    map<pair<ll,ll> ,ll> mp;
    map<ll,ll>check;
    for(ll i=1;i<=n;i++)
    {
      cin>>x;
      check[x]++;
      pair<ll,ll>p;
      p.first=x;
      p.second=check[x];
      mp[p]=i;
    }
    while(q--)
    {
        cin>>x>>y;
        pair<ll,ll>p;
        p.first=x;
        p.second=y;
        if(mp[p])
        cout<<mp[p]<<endl;
        else
            cout<<-1<<endl;
    }



}

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)
const ll N=1e5+2;






int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    ll mx=1000000000+1;
    ll n,w;cin>>n>>w;
    ll x,y,sum=0;
    vector<pair<ll,ll> >v;
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
        sum+=y;
    }
    ll k=min((ll)100005,sum);
    ll dp[k+1];
    memset(dp,mx,sizeof(dp));
    dp[0]=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=k;j>=v[i].second;j--)
        {
            dp[j]=min(dp[j],dp[j-v[i].second]+v[i].first);
        }
    }
    ll ans=0;
   for(ll i=0;i<=k;i++)
   {
       if(dp[i]<=w)
       {
           ans=max(ans,i);
       }
   }
   cout<<ans<<endl;
}


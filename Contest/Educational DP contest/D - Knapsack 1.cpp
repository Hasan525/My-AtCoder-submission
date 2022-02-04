#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)
const ll N=1e3+2;






int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();


    ll n,w;cin>>n>>w;
    ll x,y;
    vector<pair<ll,ll> >v;
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    ll dp[w+1]={0};
    for(ll i=0;i<n;i++)
    {
        for(ll j=w;j>=v[i].first;j--)
        {
            dp[j]=max(dp[j],dp[j-v[i].first]+v[i].second);
        }
    }
   cout<<dp[w]<<endl;
}

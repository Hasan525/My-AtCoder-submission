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



   ll n,m,x,y;cin>>n>>m;
   vector<ll>v[n+2];
   map<ll,ll>mp;
   for(ll i=0;i<m;i++)
   {
       cin>>x>>y;
       v[x].push_back(y);
       mp[y]++;
   }

   ll dp[n+2];
   ll mx=0;
   memset(dp,0,sizeof(dp));
   queue<ll>q;

   for(ll i=1;i<=n;i++)
    if(mp[i]==0)
    q.push(i);

   while(!q.empty())
   {
       x=q.front();
       q.pop();
       for(ll i=0;i<v[x].size();i++)
       {
           dp[v[x][i]]=max(dp[v[x][i]],dp[x]+1);
           mx=max(dp[v[x][i]],mx);
           mp[v[x][i]]--;
           if(mp[v[x][i]]==0)
            q.push(v[x][i]);
       }
   }

   cout<<mx<<endl;

}

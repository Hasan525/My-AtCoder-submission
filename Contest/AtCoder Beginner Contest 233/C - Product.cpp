#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)
const ll mx=200000;
vector<ll>v[mx];
ll ans=0,n,x;

ll product(ll i,ll x)
{
    if(i==n)
    {
        if(x==1)
            ans++;
        return 1;
    }
    for(ll j=0;j<v[i].size();j++)
    {
        if(x%v[i][j]==0)
        {
            product(i+1,x/v[i][j]);
        }
    }
  return ans;

}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();


    cin>>n>>x;
    ll y,ball;
    for(ll i=0; i<n; i++)
    {
        cin>>y;
        for(ll j=0; j<y; j++)
        {
            cin>>ball;
            v[i].push_back(ball);
        }
    }
    cout<<product(0,x)<<endl;
}

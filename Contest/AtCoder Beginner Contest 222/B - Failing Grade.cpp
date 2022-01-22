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


    ll n,m;cin>>n>>m;
    ll x,ans=0;
    while(n--)
    {
        cin>>x;
        if(x<m)
            ans++;
    }
    cout<<ans<<endl;


}

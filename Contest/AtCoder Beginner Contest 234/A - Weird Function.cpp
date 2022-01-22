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

    ll n;cin>>n;
    ll res=(n*n)+(2*n)+3;
    ll cnt=res+n;
    ll x=(res*res)+(2*res)+3;
    ll y=(cnt*cnt)+(2*cnt)+3;
    ll ans=x+y;
    cout<<(ans*ans)+(2*ans)+3<<endl;


}

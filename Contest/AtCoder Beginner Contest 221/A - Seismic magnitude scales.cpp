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

    ll a,b;cin>>a>>b;
    ll cnt=a-b;
    ll ans=pow((ll)32,cnt);
    cout<<ans<<endl;

}

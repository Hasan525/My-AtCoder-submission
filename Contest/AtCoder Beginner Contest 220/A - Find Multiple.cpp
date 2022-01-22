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

    ll a,b,c;cin>>a>>b>>c;
    ll cnt=a/c;
    if(a%c)
        cnt++;
    if(cnt*c<=b)
        cout<<cnt*c<<endl;
    else
        cout<<"-1"<<endl;

}

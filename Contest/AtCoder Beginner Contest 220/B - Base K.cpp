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

    ll k,a,b;cin>>k;
    cin>>a>>b;
    ll i=0;
    ll cnt=0,res=0;
    while(a)
    {
        cnt+=(a%10)*(pow(k,i));
        i++;
        a/=10;
    }
    i=0;
    while(b)
    {
         res+=(b%10)*(pow(k,i));
         i++;
         b/=10;
    }
    cout<<res*cnt<<endl;

}

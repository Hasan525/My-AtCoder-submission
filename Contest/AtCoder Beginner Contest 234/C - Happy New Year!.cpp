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
    vector<ll>v;
    while(n)
    {
       if(n%2)
       v.push_back(2);
       else
       v.push_back(0);
       n/=2;
    }
    for(ll i=v.size()-1;i>=0;i--)
        cout<<v[i];
}

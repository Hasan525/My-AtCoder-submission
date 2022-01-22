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
        v.push_back(n%10);
        n/=10;
    }
    while(v.size()!=4)
        v.push_back(0);
    for(ll i=v.size()-1;i>=0;i--)
        cout<<v[i];


}

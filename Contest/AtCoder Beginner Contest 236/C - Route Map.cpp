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
    map<string,ll>mp;
    string t;
    string s[n+2];
    for(ll i=0;i<n;i++)
        cin>>s[i];
    for(ll i=0;i<m;i++)
    {
        cin>>t;
        mp[t]++;
    }
    for(ll i=0;i<n;i++)
    {
        if(mp[s[i]])
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }



}

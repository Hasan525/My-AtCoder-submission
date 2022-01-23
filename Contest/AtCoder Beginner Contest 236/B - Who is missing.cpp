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
    ll arr[4*n+2];
    map<ll,ll>mp;
    for(ll i=0;i<(4*n)-1;i++)
       {
            cin>>arr[i];
            mp[arr[i]]++;
       }
     for(ll i=0;i<(4*n)-1;i++)
       {
            if(mp[arr[i]]<4)
            {
                cout<<arr[i]<<endl;
                return 0;
            }
       }




}

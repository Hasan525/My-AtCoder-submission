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
    ll arr[n+1];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    ll ans=arr[0];
    for(ll i=1;i<n;i++)
    {
        if(ans<arr[i])
            ans=arr[i];
        else
            break;
    }
    cout<<ans<<endl;


}



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

    ll n,m;
    cin>>n>>m;
    ll arr[n][m];
    for(ll i=0; i<n; i++)
        for(ll j=0; j<m; j++)
            cin>>arr[i][j];
    for(ll j=0; j<m; j++)
       {
        for(ll i=0; i<n; i++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
       }

}

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


    ll n,m=3;
    cin>>n;
    ll arr[n][m];
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
            cin>>arr[i][j];
    }
    ll dp[n][m];
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
            dp[i][j]=0;
    }
    ll mx=0;
    for(ll i=0; i<m; i++)
        {
            dp[0][i]=arr[0][i];
            mx=max(mx, dp[0][i]);
        }




    for(ll i=1; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            for(ll k=0;k<m;k++)
            {
                if(k!=j)
                {
                   dp[i][k]=max(dp[i-1][j]+arr[i][k], dp[i][k]);
                   mx=max(dp[i][k],mx);
                }
            }

        }
    }

    cout<<mx<<endl;



}

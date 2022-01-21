#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)



int main()
{



    ll n,k;
    cin>>n>>k;
    ll arr[n+2];
    for(ll i=0; i<n; i++)
        cin>>arr[i];
    ll dp[n+2];
    for(ll i=1; i<n; i++)
        dp[i]=INT_MAX;
    dp[0]=0;
    ll i=0;
    while(i<n)
    {
        for(ll j=1; j<=k; j++)
        {
            if(i+j<n)
                dp[i+j]=min(dp[i+j],(dp[i]+(abs(arr[i]-arr[i+j]))));
            else break;
        }
        i++;
    }
    cout<<dp[i-1]<<endl;
}

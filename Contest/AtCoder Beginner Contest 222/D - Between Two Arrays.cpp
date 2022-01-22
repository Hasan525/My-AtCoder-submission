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

    ll n;
    cin>>n;
    ll a[n],b[n];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    for(ll i=0; i<n; i++)
        cin>>b[i];
    ll dp[3002];
    ll sum[3002];
    memset(dp,0,sizeof(dp));
    memset(sum,0,sizeof(sum));
    if(n==1)
    {
        cout<<(b[0]-a[0]+1)%998244353<<endl;
        return 0;
    }
    for(ll i=a[n-2]; i<=b[n-2]; i++)
    {
        ll ma=max(i,a[n-1]);
        dp[i]=(b[n-1]-ma+1)%998244353;
    }
    sum[a[n-2]]=dp[a[n-2]];
    for(ll i=a[n-2]+1; i<=b[n-2]; i++)
    {
        sum[i]=(sum[i-1]+dp[i]);
        sum[i]%=998244353;
    }
    for(ll i=n-3; i>=0; i--)
    {
        for(ll j=a[i]; j<=b[i]; j++)
        {
            ll ma=max(j,a[i+1]);
            if(ma)
            {
                dp[j]=abs(sum[b[i+1]]-sum[ma-1]+998244353)%998244353;
            }
            else
                dp[j]=sum[b[i+1]]%998244353;
            //cout<<dp[j]<<" "<<ma<<endl;
        }
        sum[a[i]]=dp[a[i]];
        for(ll j=a[i]+1; j<=b[i]; j++)
        {
            sum[j]=(sum[j-1]+dp[j])%998244353;
        }


    }
    cout<<sum[b[0]]<<endl;





}

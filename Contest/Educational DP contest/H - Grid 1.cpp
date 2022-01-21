#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)
ll dp[1002][1002];
const ll mod=1000000007;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    ll n,m;cin>>n>>m;
    string s[n+1];
    for(ll i=0;i<n;i++)
        cin>>s[i];
    dp[0][0]=1;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(s[i][j]=='#')
                continue;
            if(i-1>=0)
            dp[i][j]+=dp[i-1][j];
            if(j-1>=0)
            dp[i][j]+=dp[i][j-1];
            dp[i][j]%=mod;

        }
    }
    cout<<dp[n-1][m-1]<<endl;



}

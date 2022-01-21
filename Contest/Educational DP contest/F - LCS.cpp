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

    string s,st;
    cin>>s>>st;
    ll n=s.size();
    ll m=st.size();
    ll dp[n+2][m+2];
    char di[n+2][m+2];
    for(ll i=0; i<=m; i++)
        dp[0][i]=0;
    for(ll i=0; i<=n; i++)
        dp[i][0]=0;


    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=m; j++)
        {
            if(s[i-1]==st[j-1])
               {
                    dp[i][j]=dp[i-1][j-1]+1;
                    di[i][j]='a';
               }
            else if(dp[i-1][j]>=dp[i][j-1])
            {
                dp[i][j]=dp[i-1][j];
                di[i][j]='b';
            }
            else
            {
                dp[i][j]=dp[i][j-1];
                di[i][j]='c';
            }

        }
    }

    string ans;
    ll i=n,j=m;
    while(i>0 && j>=0)
    {
       if(di[i][j]=='a')
       {
           ans+=s[i-1];
           i--;j--;
       }
       else if(di[i][j]=='b')
       i--;
       else
        j--;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;

}

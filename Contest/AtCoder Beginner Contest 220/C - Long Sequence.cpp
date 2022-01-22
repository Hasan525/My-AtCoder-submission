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


        ll n,k,sum=0,ans=0,x;
        cin>>n;
        ll ara[n+1];
        ara[0]=0;
        for(ll i=1; i<=n; i++)
        {
            cin>>x;
            ara[i]=x+ara[i-1];
            sum+=x;
        }
        cin>>x;
        k=(x+sum-1)/sum;
        ans=(k-1)*n;
        sum*=(k-1);
        for(ll i=1; i<=n; i++)
        {
            ans++;
            if(sum+ara[i]>x) break;
        }
        if(sum+ara[n]==x) ans++;
        cout<<ans<<endl;
}

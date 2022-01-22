#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define tc ll t;cin>>t;while(t--)




int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();


    ll n;cin>>n;
    ll arr[n+2],brr[n+2];
    for(ll i=1;i<=n;i++)
    {
        cin>>arr[i];
        brr[arr[i]]=i;
    }
    for(ll i=1;i<=n;i++)
        cout<<brr[i]<<" ";
    cout<<endl;
}

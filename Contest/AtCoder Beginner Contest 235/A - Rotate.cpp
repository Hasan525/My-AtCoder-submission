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
    ll arr[4];
    ll ans=n;
    ll i=2;
    while(n)
    {
        arr[i--]=n%10;
        n/=10;
    }
    swap(arr[0],arr[2]);
    swap(arr[1],arr[2]);
    i=0;
    ll k=0;
    while(i<3)
    {
        k*=10;
       k+=arr[i];
        i++;
    }
    ans+=k;
    swap(arr[0],arr[2]);
    swap(arr[1],arr[2]);
    i=0;k=0;
    while(i<3)
    {
        k*=10;
        k+=arr[i];
        i++;
    }

    ans+=k;
    cout<<ans<<endl;


}

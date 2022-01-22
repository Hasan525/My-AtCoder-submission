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
    ll arr[100];
    ll k=0;
    while(n)
    {
        arr[k++]=n%10;
        n/=10;
    }
    sort(arr,arr+k,greater<ll>());
    ll a=arr[0],b=arr[1];
    for(ll i=2;i<k;i++)
    {
       ll x=a;
       x*=10;
       x+=arr[i];
       ll cnt=b*x;
       ll y=b;
       y*=10;
       y+=arr[i];
       ll res=a*y;
       if(cnt>res)
        a=x;
       else
        b=y;

    }
    //cout<<a<<" "<<b<<endl;
    cout<<a*b<<endl;
}

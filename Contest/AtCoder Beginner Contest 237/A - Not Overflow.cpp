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
    ll k=pow(2,30);
    cout<<k<<endl;
    ll m=-k;
    k--;
    if(m<=n && k>=n)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;




}

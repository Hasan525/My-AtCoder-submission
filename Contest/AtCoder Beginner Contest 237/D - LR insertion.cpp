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
    string s;cin>>s;
    vector<ll>a,b;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='L')
            a.push_back(i);
        else
            b.push_back(i);
    }
    for(ll i=0;i<b.size();i++)
        cout<<b[i]<<" ";
    cout<<n<<" ";
    for(ll i=a.size()-1;i>=0;i--)
        cout<<a[i]<<" ";
    cout<<endl;

}



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


       ll l,r;cin>>l>>r;
       string s;
       cin>>s;
       reverse(s.begin()+(l-1),s.begin()+r);
       cout<<s<<endl;

}

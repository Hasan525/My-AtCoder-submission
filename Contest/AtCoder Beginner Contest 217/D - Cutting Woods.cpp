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

    ll n,q;cin>>n>>q;
    ll a,b;
    set<ll>s;
    set<ll>::iterator it,itr;
    s.insert(0);s.insert(n);
    while(q--)
    {
        cin>>a>>b;
        if(a==1)
            s.insert(b);
        else
        {
              it = s.upper_bound(b);
              itr= s.lower_bound(b);
              itr--;
              cout<<*it-*itr<<endl;
        }
    }



}

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

    string s,t;cin>>s>>t;
    ll n=min(s.size(),t.size());
    for(ll i=0;i<n;i++)
    {
        if(s[i]<t[i])
        {
            cout<<"Yes"<<endl;
            return 0;
        }
        else if(s[i]>t[i])
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    if(s.size()<t.size())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}

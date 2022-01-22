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

    string s,t;cin>>s>>t;
    for(ll i=0;i<s.size()-1;i++)
    {
        if(s[i]!=t[i])
        {
           swap(s[i],s[i+1]);
           break;
        }
    }
    if(s==t)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;


}

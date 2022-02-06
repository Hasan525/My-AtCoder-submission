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


    tc
    {
       ll a,s;cin>>a>>s;
       if(s>=2*a && ((s-a)&a)==a)
            cout<<"Yes"<<endl;
       else
        cout<<"No"<<endl;
    }
}

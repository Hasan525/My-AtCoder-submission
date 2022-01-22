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

    map<string,ll>mp;
    string a,b,c;cin>>a>>b>>c;
    mp[a]++,mp[b]++;mp[c]++;
    if(!mp["ABC"])
        cout<<"ABC"<<endl;
    else if(!mp["ARC"])
        cout<<"ARC"<<endl;
    else if(!mp["AGC"])
        cout<<"AGC"<<endl;
    else
        cout<<"AHC"<<endl;
}

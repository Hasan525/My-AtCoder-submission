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

    string t="abcdefghijklmnopqrstuvwxyz";
    ll x,n=26;
    while(n--)
    {
        cin>>x;
        cout<<t[x-1];
    }

}

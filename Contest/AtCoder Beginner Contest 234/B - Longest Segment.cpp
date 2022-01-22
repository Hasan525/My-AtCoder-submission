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
    vector<pair<ll,ll> >v;
    ll x,y;
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    double mi=INT_MIN;
    for(ll i=0;i<n-1;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
           ll cnt=(abs(v[i].first-v[j].first))*(abs(v[i].first-v[j].first));
           cnt+=(abs(v[i].second-v[j].second))*(abs(v[i].second-v[j].second));
            double ans=(sqrt(double(cnt)));
            mi=max(ans,mi);
        }
    }
    printf("%.10lf",mi);
}

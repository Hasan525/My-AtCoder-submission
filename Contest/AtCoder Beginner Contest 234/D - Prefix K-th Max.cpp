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


    priority_queue<ll>pq;
    ll n,k;cin>>n>>k;
    ll arr[n+2];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    for(ll i=0;i<k;i++)
    {
        pq.push(-arr[i]);
    }
    cout<<-pq.top()<<endl;
    for(ll i=k;i<n;i++)
    {
        if(arr[i]>-pq.top())
        {
            pq.pop();
            pq.push(-arr[i]);
            cout<<-pq.top()<<endl;
        }
        else
            cout<<-pq.top()<<endl;
    }


}

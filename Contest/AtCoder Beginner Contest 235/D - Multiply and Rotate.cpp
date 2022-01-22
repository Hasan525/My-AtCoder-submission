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

    ll a,n;cin>>a>>n;
    ll M=1;
    while(M<=n)
        M*=10;

    queue<ll>q;
    map<ll,ll>mp;
	q.push(1);
	while(!q.empty()){
		ll x = q.front();
		q.pop();
		if(x*a < M && mp[x*a] == 0){
			q.push(x*a);
			mp[x*a] = 1 + mp[x];
		}
		if(x % 10 != 0 && x > 10){
			ll temp = x;
			ll len = 1;
			ll prev = x;
			while(temp > 0){
				temp /= 10;
				len *= 10;
			}
			len /= 10;
			temp = x % 10;
			x = x/10 + len*temp;
			if(x < M && mp[x] == 0)
			{
				q.push(x);
				mp[x] = 1 + mp[prev];
			}
		}
	}
    if(mp[n] || n==1)
        cout<<mp[n]<<endl;
    else
        cout<<-1<<endl;







}

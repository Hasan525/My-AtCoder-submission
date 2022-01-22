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

    ll n;cin>>n;
    ll a,b;
    queue<ll>q;
    multiset<ll>ms;
    multiset<ll>::iterator it;
    while(n--)
    {
        cin>>a;
        if(a==1)
        {
            cin>>b;
            q.push(b);
        }
        else if(a==3)
        {
            while(!q.empty())
            {
                ms.insert(q.front());
                q.pop();
            }
        }
        else
        {
            if(ms.empty())
            {
                cout<<q.front()<<endl;
                q.pop();
            }
            else
            {
                it=ms.begin();
                cout<<*it<<endl;
                ms.erase(it);
            }
        }

    }



}

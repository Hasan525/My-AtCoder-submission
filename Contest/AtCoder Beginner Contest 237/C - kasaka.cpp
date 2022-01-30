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

    string s;cin>>s;
    string st="";
    ll n=s.size();
    bool flag=true;
    ll i=0,j=n-1;
    while(i<=j)
    {
        if(s[j]==s[i])
          {
               i++;j--;
          }
        else if(s[j]=='a')
            {
                flag=false;
                st+='a';j--;
            }
        else
        {
            flag=false;
            break;
        }
    }
    if(!flag)
    {
        st+=s;
        ll i=0,j=st.size()-1;
        flag=true;
        while(i<=j)
        {
            if(st[i]==st[j])
            {
                i++;
                j--;
            }
            else
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
    else
        cout<<"Yes"<<endl;



}

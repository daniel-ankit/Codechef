#include<bits/stdc++.h>
using namespace std;
                                       
#define tc         int t; cin>>t; while(t--)
#define ff         first
#define ss         second            
#define pb         push_back
#define pp         pop_back
#define mp         make_pair
#define ll         long long
#define Radhe      ios::sync_with_stdio(false);
#define Krishna    cin.tie(NULL);

int main()
{
     Radhe Krishna

     tc
     {
        ll n;
        string str;
        cin>>n;
        cin>>str;
        ll x,y;
        cin>>x>>y;
        vector<pair<ll,ll>> v;

        for(int i=0; i<n; i++)
        {
           if(str[i]=='W')
           {
              v.pb(mp(0,min(2*x,2*y)));
           }
           else if(str[i]=='E')
           {
              v.pb(mp(min(2*x,2*y),0));
           }
           else if(str[i]=='N')
           {
              v.pb(mp(min(3*x,y),min(x,3*y)));
           }
           else
           {
              v.pb(mp(min(x,3*y),min(y,3*x)));
           }
        }

        ll pre[n]; pre[0]=v[0].ss;
        ll suff[n]; suff[n-1]=v[n-1].ff;

        for(int i=1; i< n; i++)
        {
            pre[i]=v[i].ss + pre[i-1];
        }

        for(int i=n-2; i>= 0; i--)
        {
           suff[i]= suff[i+1]+v[i].ff;
        }

        ll res=min(suff[0],pre[n-1]);

        for(int i=0; i < n-1; i++)
        {
            res=min(res,(pre[i]+suff[i+1]));
        }

        cout<<res<<"\n";
     }
}
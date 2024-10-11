///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتلُ*///
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define F first
#define S second
#define PB push_backz
#define int long long
void fast(){cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);}
void solve ()
{
   int m,s;cin>>m>>s;
   int ts=s;
   vector<int>a(m),b(m);
   a[0]=min(s-s+1,s);
   s-=min(s-s+1,s);
   bool ok1=0,ok2=0;
   int cnt1=0,cnt2=0;
   reverse(all(a));
   for(int i=0;i<m;i++)
   {
        int mn=min(9-a[i],s);
        s-=mn;
        a[i]+=mn;
        cnt1+=(a[i]==0);
   }
   ok1=(s>0);
   reverse(all(a));
     s=ts;
     b[0]=min(s-s+1,s);
     s-=min(s-s+1,s);
    
   for(int i=0;i<m;i++)
   {
        int mn=min(9-b[i],s);
        s-=mn;
        b[i]+=mn;
        cnt2+=(b[i]==0);
   }
   ok2=(s>0);
   if(ok1 or (cnt1==m)and m!=1)
    cout<<-1;
   else 
   for(auto it:a)cout<<it;
   cout<<' ';
   if(ok2 or (cnt2==m)and m!=1)
   cout<<-1;
   else 
   for(auto it:b)cout<<it;
     // cout<<endl<<cnt1<<' '<<cnt2<<endl;
     // cout<<ok1<<' '<<ok2<<endl;
     // cout<<s<<endl;
     // cout<<m<<endl;
   
   
   
   
   
   
}
int32_t main() {
    int t=1;//cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
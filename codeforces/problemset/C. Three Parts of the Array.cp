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
   int n;cin>>n;
   vector<int>a(n+9),pre(n+9),suff(n+9);
   for(int i=1;i<=n;i++)
   {
        cin>>a[i];
        pre[i]+=pre[i-1]+a[i];
   }
   map<int,int>mp;
   for(int i=n;i>=1;i--)
   {
        suff[i]+=suff[i+1]+a[i];
        mp[suff[i]]=i;
   }
   int mx=0;
   for(int i=1;i<=n;i++)
   {
        if(mp[pre[i]]>i)mx=pre[i];
   }
   cout<<mx<<endl;
   
   
}
int32_t main() {
     fast();
    int t=1;
    //cin>>t;
    while(t--)
    {
         
        solve();
    }

    return 0;
}
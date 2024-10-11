///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتلُ*///
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define F first
#define S second
#define pb push_back
#define int long long
void fast(){cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);}
int bs(int idx,vector<int>&a)
{
     int l=0,r=a.size()-1,res=-1,mid;
     while(l<=r)
     {
          mid=l+r>>1;
          if(a[mid]>=idx)res=a[mid],r=mid-1;
          else l=mid+1;
     }
     // if(res!=-1)res++;
     return res;
}
void solve ()
{
   int n;
   cin>>n;
   vector<int>a(n+9);
   for(int i=1;i<=n;i++)
   cin>>a[i];
   // first step
   for(int i=1;i<=n;i++)a[i]+=a[i-1];
   int cnt=0;
   // second step
   map<int,vector<int>>mp;
   for(int i=1;i<=n;i++)
   {
        mp[a[i]].pb(i);
   }
   // third step
   for(int i=1;i<=n;i++)
   {
        if(bs(i,mp[a[i-1]])==-1)cnt+=n-i+1;
        else cnt+=bs(i,mp[a[i-1]])-i;
     //    cout<<i<<' '<<bs(i,mp[a[i-1]])<<endl;
   }
   cout<<cnt<<endl;
   
   
   
   
   
   
   
}
int32_t main() {
    int t=1;//cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
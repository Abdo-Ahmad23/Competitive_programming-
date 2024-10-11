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
int n,k;
vector<int>a;
bool check(int mid)
{
     int sum=0;
     for(int i=n/2;i<n;i++)
          if(mid-a[i]>=0)sum+=mid-a[i];
     return sum<=k;
     
}
void solve ()
{
   cin>>n>>k;
   a.resize(n);
   for(int i=0;i<n;i++)cin>>a[i];
   sort(all(a));
   int l=1,r=1e10,mid,res=1;
   while(l<=r)
   {
        mid=(l+r)>>1;
        if(check(mid))
        res=mid,l=mid+1;
        else r=mid-1;
   }
   cout<<res<<endl;
   
   
   
   
}
int32_t main() {
    int t=1;//cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتلُ*///
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
#define int long long
void solve()
{
   int n,k;cin>>n>>k;
   vector<int>a(n);
   for(auto &it:a)cin>>it;
   int l=0,r=0,mx=0,sum=0,taken=0;
   while(l<n)
   {
       while(r<n && sum+a[r]<=k)
       {
           sum+=a[r];
           taken++;
           r++;
           mx=max(mx,taken);
       }
       sum-=a[l];
       l++;
       taken--;
   }
   cout<<mx<<endl;
}
int32_t main()
{

    fast
    int t=1;//cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;

}

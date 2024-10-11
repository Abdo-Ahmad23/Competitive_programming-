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
int sum(int n)
{
    return ((1+n)*n)/2;
}
void solve()
{
   int n;cin>>n;
   int l=1,r=3e9,mid,res;
   while(l<=r){
    mid=l+r>>1;
    if(sum(mid)>=n)res=mid,r=mid-1;
    else l=mid+1;
   }
   cout<<res<<endl;
}
int32_t main()
{

    fast
    int t=1;cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;

}

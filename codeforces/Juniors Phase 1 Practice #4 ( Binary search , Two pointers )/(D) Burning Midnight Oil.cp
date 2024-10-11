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
int n,k;
int sum(int x)
{
    int s=x;
    while(x>0)
    {
        s+=x/k;
        x/=k;
    }
    return s>=n;
}
void solve()
{
    cin>>n>>k;
    int l=0,r=n,mid,res;
    while(l<=r)
    {
        mid=l+r>>1;
        if(sum(mid))res=mid,r=mid-1;
        else l=mid+1;
    }
    cout<<res<<endl;

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

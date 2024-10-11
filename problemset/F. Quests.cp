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
int n,d,c;
vector<int>a;
bool can(int mid)
{
    int tmp=mid+1,sum=0,idx=0;
    for(int i=0;i<d;i++)
    {
        if(idx<n)sum+=a[idx++];

        tmp--;

        if(tmp==0)idx=0,tmp=mid+1;

    }
    return sum>=c;

}
int bs()
{
        int l=0,r=d,mid,res=-1;
        while(l<=r){
            mid=(l+r)>>1;
            if(can(mid))res=mid,l=mid+1;
            else r=mid-1;
        }
        return res;

}
void solve()
{
    cin>>n>>c>>d;
    a.resize(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    for(int i=0;i<min(n,d);i++)sum+=a[i];

    int res=bs();
   // cout<<(sum>=c?"Infinity":res==-1?"Impossible":ts(res))<<endl;
    if(sum>=c)cout<<"Infinity"<<endl;
    else if(res==-1)cout<<"Impossible"<<endl;
    else cout<<res<<endl;
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
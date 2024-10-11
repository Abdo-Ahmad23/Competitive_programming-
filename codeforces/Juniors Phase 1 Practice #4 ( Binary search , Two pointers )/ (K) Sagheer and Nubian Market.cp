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
vector<pair<int,int>>ans;
int n,s;
vector<int>a;
vector<int>b;
int can(int k)
{
    b.resize(n);
    for(int i=0;i<n;i++){
        b[i]=a[i]+(i+1)*k;
    }
    int sum=0;

    sort(all(b));
    for(int i=0;i<k;i++)sum+=b[i];
    if(sum<=s){
        ans.pb({k,sum});
        return sum;
    }
    return -1;
}
pair<int,int> bs()
{
    int l=1,r=n,mid;
    pair<int,int>res={0,0};
    while(l<=r)
    {
        mid=l+r>>1;

//        cout<<mid<<' '<<res.F<<' '<<res.S<<endl;
        if(can(mid)!=-1)
        {
//            cout<<mid<<' '<<res.F<<' '<<res.S<<endl;
            l=mid+1;
        }
        else r=mid-1;
    }
    return res;
}
bool cmp(pair<int,int>&x,pair<int,int>&y)
{
    if(x.F!=y.F)return x.F>y.F;
    return x.S<y.S;
}
void solve()
{
    cin>>n>>s;
    a.resize(n);
    for(auto &it:a)cin>>it;

    pair<int,int>res=bs();
    ans.pb({0,0});
//    cout<<ans.size()<<endl;
    sort(all(ans),cmp);
    cout<<ans[0].F<<' '<<ans[0].S<<endl;
//    for(auto it:ans)cout<<it.F<<' '<<it.S<<endl;

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

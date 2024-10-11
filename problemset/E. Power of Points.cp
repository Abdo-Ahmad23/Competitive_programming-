///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتل*///
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
const int dog_man=-10000;
#define int long long 
void solve()
{
     int n;cin>>n;
    vector<pair<int,int>>vp(n);
    for (int i=0,x;i<n;i++) {
        cin>>x;
        vp[i]={x,i};
    }
    vector<int>ans(n),pre(n+9),suf(n+9);
    sort(all(vp));
    for (int i=1;i<=n;i++)pre[i]=pre[i-1]+vp[i-1].F;
    for (int i=n;i>=1;i--)suf[i]=suf[i+1]+vp[i-1].F;
    for (int i=1;i<=n;i++){
        int l=0,r=0;
        if(i>1){
            l=vp[i-1].F*(i-1)+i-1;
            l-=pre[i-1];
        }
        if(i+1<=n){
            r=suf[i+1]+(n-i);
            r-=vp[i-1].F*(n-i);
        }
        ans[vp[i-1].S]=l+r+1;
    }
    for (auto it:ans)cout<<it<<' ';
    cout<<endl;
     
}

int32_t main()
{

    fast
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;

}
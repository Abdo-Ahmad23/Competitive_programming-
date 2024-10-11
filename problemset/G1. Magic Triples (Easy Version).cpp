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
int const mx=1e6;
int fr[mx+9],vis[mx+9];
void solve()
{
    int n;cin>>n;
    vector<int>a(n);
//    vis.clear();
//    map<int,int>vis;
//    map<pair<int,pair<int,int>>>vis;
    for(auto &it:a)cin>>it,fr[it]++;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cnt+=(fr[a[i]]-1)*(fr[a[i]]-2);
        if(vis[a[i]]==0){

        for(int b=2;b*b*a[i]<=mx;b++)
        {
            int c1=fr[a[i]];
            int c2=fr[a[i]*b];
            int c3=fr[a[i]*b*b];
            if(a[i]*b==a[i])c2--;
            if(a[i]*b*b==a[i]*b && a[i]*b*b==a[i])c3-=2;
            else if(a[i]*b*b==a[i]*b)c3--;
            else if(a[i]*b*b==a[i])c3--;
            int res=c1*c2*c3;
            if(res>0)cnt+=res;
//            cout<<a[i]<<' '<<c1<<endl;
//            cout<<a[i]*b<<' '<<c2<<endl;
//            cout<<a[i]*b*b<<' '<<c3<<endl;
//            cout<<"cnt "<<cnt<<endl;
//            cout<<"****************************************"<<endl;


        }
        vis[a[i]]=1;

        }
    }
    cout<<cnt<<endl;
    for(auto it:a)fr[it]=0,vis[it]=0;
//    memset(fr,sizeof fr,0);
//    memset(vis,sizeof vis,0);
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
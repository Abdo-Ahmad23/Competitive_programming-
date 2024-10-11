///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتل*///
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
    int n;cin>>n;
    vector<int>a(n),b(n),c(n),ans;
    for(auto &it:a)cin>>it;
    int mx =-1e17;
    for (int i=0;i<n;i++) {
        cin>>b[i],c[i]=a[i]-b[i];
        mx=max(mx,c[i]);
    }
    for (int i=0;i<n;i++)
    if(c[i]==mx)ans.pb(i);
    cout<<ans.size()<<endl;
    for (auto it:ans)
        cout<<it+1<<' ';
}

int32_t main()
{

    fast
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";
        solve();
        cout<<endl;
    }
    return 0;

}
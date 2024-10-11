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
    int n;cin>>n;
    vector<int>a(n);
    for(auto &it:a)cin>>it;
    int mn=LLONG_MAX;
    if(n<3){cout<<0<<endl;return;}
    for(int i=-1;i<=1;i++)
    {
        for(int j=-1;j<=1;j++)
        {
            vector<int>b(a);
            bool ok=0;
            int cnt=0;
            b[0]+=i;
            b[1]+=j;
            int tmp=b[1]-b[0];
            for(int k=2;k<n;k++)
            {
                int res=b[k]-b[k-1];
                if(res==tmp)continue;
                else if(abs(res-tmp)==1)cnt+=1,b[k]=b[k-1]+tmp;
                else ok=1;
            }
            if(ok==0)mn=min(mn,cnt+abs(i)+abs(j));
        }
    }
     if(mn==LLONG_MAX)cout<<-1<<endl;
    else cout<<mn<<endl;
}
int32_t main()
{
    fast
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;

}

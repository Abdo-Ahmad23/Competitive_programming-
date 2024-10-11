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
int const N=2e5;
int fr[N+9];
void solve()
{
    int n;cin>>n;
    priority_queue<int,vector<int>,greater<int>>a;
    int k=2*n-1;
    while(k--){int x;cin>>x;a.push(x);}
    vector<int>b;
    int t=1e4,mx=LLONG_MIN;
    while(t--)
    {
    int sum=0;
    for(int i=0;i<n;i++)
    {

        int t=a.top();
        a.pop();
        t*=-1;
        a.push(t);
    }
    vector<int>ans;
    while(a.empty()==0)
    {
        ans.pb(a.top());
        a.pop();
    }
    for(auto it:ans)sum+=it;
    for(auto it:ans)a.push(it);
    ans.clear();
    mx=max(mx,sum);

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
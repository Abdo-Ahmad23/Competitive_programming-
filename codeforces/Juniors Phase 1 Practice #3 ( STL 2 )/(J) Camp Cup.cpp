///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتلُ*///
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define ull unsigned long long
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define ll long long
#define pi 3.14159265358979323846264338327950288419716939937510
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
#define int long long
bool cmp(pair<string,int>&x,pair<string,int>&y)
{
    if(x.S==y.S){
        return x.F<y.F;
    }
    return x.S>y.S;
}
int transfrom(int n)
{
    double res=n;
    res*=0.9;
    int go=res;
//    cout<<"res : "<<res<<endl;
    double faka=res-go;
//    cout<<"faka : "<<faka<<endl;
    if(faka>=0.5)return ((int)res+1);
    else return ((int)res);
}
void solve()
{
//    int n;cin>>n;
//    cout<<transfrom(n)<<endl;
    map<string,int>mp;
    int n;cin>>n;
    set<string>par;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        int cur=1000;
        for(int j=0;j<x;j++){
            string name;
            cin>>name;
            par.insert(name);
            mp[name]+=cur;
            cur=transfrom(cur);
        }
    }
//    for(auto it:par)cout<<it<<' '<<mp[it]<<endl;
    vector<pair<string,int>>ans;
    for(auto it:par)
        ans.pb({it,mp[it]});
    sort(all(ans),cmp);
    cout<<ans[0].F<<endl;
    for(int i=0;i<ans.size();i++)cout<<ans[i].F<<' '<<ans[i].S<<endl;
////    cout<<ceil((double)(11*0.9))<<endl;

}
int32_t main()
{
    fast
    int t=1;///cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;

}

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

void solve()
{
    int n,m,k;
    cin>>n>>k>>m;
    vector<int>b(n);
    vector<string>a(n);
    map<string,int>mp;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i],mp[a[i]]=b[i];
    for(int i=0;i<k;i++){
    int x;cin>>x;
    int mn=INT_MAX;
    vector<int>go;
    for(int j=0;j<x;j++){
        int idx;
        cin>>idx;
        idx--;
        go.pb(idx);
        mn=min(mn,b[idx]);
    }
    for(int j=0;j<go.size();j++)mp[a[go[j]]]=mn;

    }
    string s;
    int sum=0;
    for(int i=0;i<m;i++){
        cin>>s;
        sum+=mp[s];
    }
    cout<<sum<<endl;
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
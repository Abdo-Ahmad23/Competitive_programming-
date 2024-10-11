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
    map<vector<int>,bool>mp;
    int n;cin>>n;
    vector<int>a(n);
    int cnt=0;
    for(auto &it:a)cin>>it;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            vector<int>b(a);
            swap(b[i],b[j]);
            if(mp[b]==0){
                cnt++;
                mp[b]=1;
            }
        }
    }
    cout<<cnt<<endl;
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

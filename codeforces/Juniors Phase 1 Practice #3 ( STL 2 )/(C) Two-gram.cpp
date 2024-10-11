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
   int n;cin>>n;
   string s;cin>>s;
   vector<string>ans;
   map<string,int>mp;
   for(int i=0;i<n-1;i++){
    string k=s.substr(i,2);
    mp[k]++;
   }
   string el;
   int mx=-1;

   for(auto it:mp){
    if((it.S)>mx){
        mx=it.S;
        el=it.F;
    }
    else if(it.S==mx){
        el=min(el,it.F);
    }
   }
   cout<<el;

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

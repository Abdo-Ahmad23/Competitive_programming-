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
struct ob{
string name;
int math,scie,engl,ara,total;
};
bool cmp(ob &x,ob &y)
{
    if(abs(x.total-y.total)>10)return x.total>y.total;
    return x.name<y.name;
}
void solve()
{
    int n;cin>>n;
    map<string,int>mp;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        if(mp[s]==0){
            cout<<"OK"<<endl;
            mp[s]++;
        }
        else {
                cout<<s<<mp[s]<<endl;
        mp[s]++;}
    }
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

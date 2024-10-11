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
#define int long long
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
bool one,two;
void solve()
{
    int n;cin>>n;
    vector<int>a(n),ans;

    for(auto &it:a){
        cin>>it;
        if(it==0 or it==100)ans.pb(it);
        else if(it>0 and it<10 and !one){
            ans.pb(it);
            one=1;
        }

        else if(it>9 and it<100 and !two and it%10==0){
            two=1;
            ans.pb(it);
        }
    }
    if(!one and !two){
        for(int i=0;i<n;i++){
            if(a[i]>9 and a[i]<100){
                ans.pb(a[i]);
                break;
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans)cout<<it<<' ';

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
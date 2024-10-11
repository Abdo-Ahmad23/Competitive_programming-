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
    deque<int>d;
    while(n--){
        string s;cin>>s;
        if(s=="back"){
            if(!d.empty()){
            cout<<d.back()<<endl;
            d.pop_back();
            }
            else cout<<"No job for Ada?"<<endl;
        }
        else if(s=="front"){
            if(!d.empty()){
            cout<<d.front()<<endl;
            d.pop_front();
            }
            else cout<<"No job for Ada?"<<endl;
        }
        else if(s=="reverse"){
            reverse(all(d));
        }
        else if(s=="push_back"){
            int x;cin>>x;
            d.pb(x);
        }
        else if(s=="toFront"){
            int x;cin>>x;
            d.push_front(x);
        }
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

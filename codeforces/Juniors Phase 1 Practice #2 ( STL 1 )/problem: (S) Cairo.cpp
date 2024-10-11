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
    int n,to=1;cin>>n;
    vector<int>a(n+1),ans;
    for(int i=1;i<=n;i++)cin>>a[i];
    stack<int>st;
    for(int i=1;i<=n;i++){
        if(a[i]==to)ans.pb(a[i]),to++;
        else if(!st.empty() && to==st.top()  ){
            ans.pb(st.top());
            st.pop();
            i--;
            to++;
        }
        else {
            st.push(a[i]);
        }

    }
    while(!st.empty()){
        ans.pb(st.top());
        st.pop();
    }
    if(is_sorted(all(ans))){
        cout<<"YES"<<endl;

    }
    else cout<<"NO"<<endl;

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

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
   string s;cin>>s;
   int n=s.size();
   stack<char>st;
   for(int i=0;i<n;i++){
    if(!st.empty()){
//        cout<<st.top()<<' '<<s[i]<<endl;
        if((st.top()=='(' and s[i]==')') or (st.top()=='{' and s[i]=='}') or (st.top()=='[' and s[i]==']')){
//        cout<<"ldldl"<<endl;
        st.pop();
        }
        else st.push(s[i]);
    }
    else st.push(s[i]);
   }
//   cout<<st.size()<<endl;
   cout<<(st.empty()?"yes":"no")<<endl;
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

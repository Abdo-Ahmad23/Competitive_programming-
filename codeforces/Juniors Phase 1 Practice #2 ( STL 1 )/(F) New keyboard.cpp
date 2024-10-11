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
    string s;
    while(cin>>s){
        deque<string>d;
        bool f=0,b=0;
        string k="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='[' or s[i]==']'){
                if(f==0 and b==0){
                d.push_front(k);
                k="";
                if(s[i]=='[')f=1,b=0;
                else b=1,f=0;
                }
                else if(f){
                    d.push_front(k);
                    k="";
                    if(s[i]=='[')f=1,b=0;
                else b=1,f=0;
                }
                else if(b){
                    d.push_back(k);
                    k="";
                    if(s[i]=='[')f=1,b=0;
                    else b=1,f=0;
                }
                if(s[i]=='[')f=1,b=0;
                else f=0,b=1;
            }
            else k+=s[i];
            if(i==s.size()-1){
                 if(f){
                    d.push_front(k);
                    k="";
                    f=1,b=0;
                }
                else if(b){
                    d.push_back(k);
                    k="";
                    f=0,b=1;
                }
            }
        }
        if(b)d.push_back(k);
        else d.push_front(k);
        for(auto it:d)cout<<it;
        cout<<endl;
        cin.ignore();
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

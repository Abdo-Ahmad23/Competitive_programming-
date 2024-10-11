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
   deque<int>a(n);
   for(auto &it:a)cin>>it;
    map<int,int>mp;
    int q;cin>>q;
    while(q--){
        char ch;cin>>ch;
        if(ch=='L'){
            if(!a.empty()){
            mp[a.front()]++;

            a.pop_front();

            }
        }
        else if(ch=='R'){
            if(!a.empty()){
            mp[a.back()]++;
            a.pop_back();

            }
        }
        else{
            if(mp.size()>0){
                auto it=mp.end();
                it--;
                if(it->S>0){
                    cout<<it->F<<endl;
                    it->S--;
                    if(it->S==0){
                        mp.erase(it);
                    }
                }
            }
            else cout<<-1<<endl;
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

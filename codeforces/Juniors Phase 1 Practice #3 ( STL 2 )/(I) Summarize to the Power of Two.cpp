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
    vector<int>a(n);
    map<int,int>mp;
    for(auto &it:a)cin>>it,mp[it]++;
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<33;j++){
            int res=1;
            res<<=j;
            int val=res-a[i];
            if(mp[val]){
                if(val==a[i]){
                    if(mp[a[i]]>1){
                        cnt++;
//                        cout<<" a[i] "<<a[i]<<" val : "<<val<<endl;
                        break;
                    }
                }
                else{
                        cnt++;
//                        cout<<" a[i] "<<a[i]<<" val : "<<val<<endl;
                        break;
                }
            }
        }
    }
    cout<<n-cnt<<endl;

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

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
    vector<int>v(n),a,b;
    int mn=INT_MAX,mx=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mx=max(mx,v[i]);
        mn=min(mn,v[i]);
    }
    for(int i=0;i<n;i++){
        if(v[i]==mn)a.pb(i);
        if(v[i]==mx)b.pb(i);
    }
    mn=INT_MAX;
    for(int i=0;i<a.size();i++){
        int l=0,r=b.size()-1,mid,res=-1;
        while(l<=r){
            mid=l+r>>1;
            if(b[mid]>=a[i]){
                res=b[mid];
                r=mid-1;
            }
            else l=mid+1;
        }
        if(res!=-1)
        mn=min(mn,abs(a[i]-res));
        l=0,r=b.size()-1,mid,res=-1;
        while(l<=r){
            mid=l+r>>1;
            if(b[mid]<=a[i]){
                res=b[mid];
                l=mid+1;
            }
            else r=mid-1;
        }
        if(res!=-1)mn=min(mn,abs(a[i]-res));
    }
    cout<<mn<<endl;
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

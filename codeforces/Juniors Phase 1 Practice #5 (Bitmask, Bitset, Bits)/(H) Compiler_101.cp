///*89لهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقا*///
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
#define int long long
int n;
vector<int>a;
int tr;
vector<bitset<40>>b;
bool to(vector<int>fr)
{
    int res=0;
    for(int i=0;i<40;i++)
    {
        if(fr[i]>0)res+=(1<<(i));
    }
    return res==tr;
}
bool can(int mid)
{
    vector<int>fr(40);
    for(int i=0;i<mid;i++)
    {
        for(int bit=0;bit<40;bit++)
           fr[bit]+= b[i][bit];
    }
    if(to(fr))return 1;
    for(int i=mid;i<n;i++)
    {
        for(int bit=0;bit<40;bit++)
           fr[bit]-=b[i-mid][bit];
        for(int bit=0;bit<40;bit++)
           fr[bit]+=b[i][bit];
        if(to(fr))return 1;
    }
    return 0;

}
int bs()
{
    int l=1,r=n,mid,res;
    while(l<=r)
    {
        mid=(l+r)>>1;
        if(can(mid))res=mid,r=mid-1;
        else l=mid+1;

    }
    return res;
}
void solve()
{
    cin>>n;
    a.resize(n);
    for(auto &it:a)cin>>it,tr|=it;
    b.resize(n);
    for(int i=0;i<n;i++)
    {
        bitset<40>x(a[i]);
        b[i]=x;
    }
    cout<<bs()<<endl;

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

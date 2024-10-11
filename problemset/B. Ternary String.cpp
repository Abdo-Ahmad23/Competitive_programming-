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
int const MX=1e5+9;
string s;
bool can(int mid)
{
    map<char,int>fr;
    for(int i=0;i<mid;i++)fr[s[i]]++;
    if(fr.size()>=3)return 1;
    for(int i=mid;i<s.size();i++)
    {
        fr[s[i-mid]]--;
        fr[s[i]]++;
        if(fr[s[i-mid]]==0)fr.erase(s[i-mid]);
        if(fr.size()>=3)return 1;
    }
    return 0;

}
int bs()
{
    int l=3,r=s.size(),mid,res=0;
    while(l<=r)
    {
        mid=l+r>>1;
        if(can(mid))res=mid,r=mid-1;
        else l=mid+1;
    }
    return res;
}
void solve()
{
    cin>>s;
    cout<<bs()<<endl;
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
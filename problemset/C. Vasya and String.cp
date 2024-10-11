///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتلُ*///
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define F first
#define S second
#define PB push_back
#define int long long
void fast(){cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);}
string s;
int n,k;
int a[100009],prfa[100009],prfb[100009];
bool  check(int mid)
{
     for(int i=mid;i<=n;i++)
          if(min(prfa[i]-prfa[i-mid],prfb[i]-prfb[i-mid])<=k)return 1;
     return 0;
}
     

void solve ()
{
   cin>>n>>k;
    cin>>s;
    for(int i=0;i<s.size();i++)
         prfa[i+1]+=(s[i]=='a'),prfb[i+1]+=(s[i]=='b');
    for(int i=1;i<=n;i++)
    prfa[i]+=prfa[i-1],prfb[i]+=prfb[i-1];
    int l=min(n,k),r=max(n,k),mid,ans=0;
    while(l<=r)
    {
         mid=l+r>>1;
         if(check(mid))ans=mid,l=mid+1;
         else r=mid-1;
    }
    cout<<ans<<endl;
    
}
int32_t main() {
    int t=1;///cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
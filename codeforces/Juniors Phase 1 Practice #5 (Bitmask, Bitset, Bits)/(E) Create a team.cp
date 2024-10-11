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
int getbit(int n,int idx){/// idx is zero base

  return ((n>>idx)&1)==1;

}
void solve()
{
   int n;cin>>n;
   int a[n+1][n+1];
   for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    cin>>a[i][j];
    int b[n];
    for(int i=1;i<=n;i++)b[i-1]=i;
   int mx=1;
   vector<int>res;
   for(int i=1;i<(1<<n);i++)
   {
       vector<int>ans;
       for(int j=0;j<n;j++)
       {
           if(getbit(i,j))ans.pb(b[j]);
       }
       bool ok=0;
       for(int j=0;j<ans.size();j++)
       {
           for(int k=0;k<ans.size();k++)
           {
               if(a[ans[j]][ans[k]]==0)ok=1;

           }
       }
       if(ok==0)
       {
           if(ans.size()>=mx){
            mx=ans.size();
            res=ans;
           }
       }
   }
    cout<<mx<<endl;
    for(int i=0;i<res.size();i++)cout<<res[i]<<' ';
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

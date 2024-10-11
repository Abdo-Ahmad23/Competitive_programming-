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
int n,k;
bool check(int mid,vector<int>&prf,vector<int>&bol)
{
    for(int i=mid;i<=n;i++)
    {
        if(prf[i]-prf[i-mid]<=k)
        {
            if(bol[i]-bol[i-mid]+1==mid)
            {
                if(bol[i]-bol[i-1]==0)
                    return 1;
            }
            else if(bol[i]-bol[i-mid]==mid)
            {
                return 1;
            }
        }
    }
    return 0;
}
void solve()
{
    cin>>n>>k;
   vector<int>a(n+9),h(n+9),prf(n+9),bol(n+9);
   for(int i=1;i<=n;i++)cin>>a[i],prf[i]=a[i];
   for(int i=1;i<=n;i++)cin>>h[i];
   for(int i=1;i<=n;i++)prf[i]+=prf[i-1];
   for(int i=1;i<n;i++)bol[i]=(h[i]%h[i+1]==0?1:0);
   for(int i=1;i<=n;i++)bol[i]+=bol[i-1];
   int l=1,r=n,mid,ans=0;
   while(l<=r)
   {
       mid=l+r>>1;
       if(check(mid,prf,bol))l=mid+1,ans=max(ans,mid);
       else r=mid-1;
   }
   cout<<ans<<endl;
   
    
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
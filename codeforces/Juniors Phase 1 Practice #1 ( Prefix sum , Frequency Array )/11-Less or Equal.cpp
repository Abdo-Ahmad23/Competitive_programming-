///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتل*///
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
#define int long long 
bool cmp(vector<int>&x,vector<int>&y)
{
     return x[1]>y[1];
}
void solve()
{
     int n;cin>>n;
     int k;cin>>k;
     vector<int>a(n);
     for(int i=0;i<n;i++)cin>>a[i];
     sort(all(a));
     if(k==0)
     {
         if(a[0]>=2)cout<<1<<endl;
        else cout<<-1<<endl;
          return;
     }
     else if(k==n)
     {
          cout<<a[k-1]<<endl;
          return;
     }
     cout<<(a[k-1]==a[k]?-1:a[k-1])<<endl;
    // cout<<a[k-1]<<' '<<a[k]<<endl;
}

int32_t main()
{

    fast
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;

}
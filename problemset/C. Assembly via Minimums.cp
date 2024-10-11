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
const int dog_man=-1000000000;
void solve()
{
     int n;cin>>n;
     int sz=(n*n-n)/2;
     vector<int>a(sz+9),ans;
     map<int,int>fr;
     /// int res=0,sum=0;
     for(int i=0;i<sz;i++)
          cin>>a[i],fr[a[i]]++;
     int y=n-1;
     /// map<int,int>vis;
     for(auto it:fr)
     {
          
          if(y==it.S) ans.pb(it.F),y--;
          //
          else
          {
               int x=y,p=0;
               while(x>0 and it.S!=p)
                    p+=x,ans.pb(it.F),x--;
               y=x;   
          }
     }
     for(auto it:ans) cout<<it<<' ' ;
     int x=ans.size();
     while(x!=n)
          cout<<-1*dog_man<<' ',x++;
     cout<<endl;
}

int32_t main()
{

    fast
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;

}
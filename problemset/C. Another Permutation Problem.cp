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
 int n;
        int sum=0,ans=0,tmp;
        int dx;
        cin>>n;
        for(int i=1;i<=n;i++)
            sum+=i*i;
        for(int i=n;i>=1;i--)
        {
            sum-=i*i;
            dx=0;
            tmp=0;
            for(int j=0;j<=n-i;j++)
            {
                dx=max(dx,(i+j)*(n-j));
                if((i+j)*(n-j)>dx)
                {
                    tmp=-1;
                    break;
                }
                tmp+=(i+j)*(n-j); 
            }
            if(tmp>0)ans=max(ans,sum+tmp-dx);}cout<<ans<<endl;
   
   
   
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
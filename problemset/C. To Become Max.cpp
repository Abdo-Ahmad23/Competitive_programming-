///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتل*///
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
//#define int long long
const int dog_man=-10000;
void solve()
{
     int n,k;
    cin>>n>>k;
    vector<int>a(n+9);
    int mx=0;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(long long i=1;i<=n;i++)
    {
        long long  d=k;
        long long  x=a[i];
        
        for(long long j=i;j<n;)
        {
            long long  cnt=0;
            
            for(j=j+1;j<=n;j++)
            {
                if(a[j]+j-i>x)break;
                else cnt+=x-j+i-a[j];
            }
            d-=cnt;
            if(a[j]+j-i<=x||d<=0) break;
            if((j-i)*(a[j]+j-i-x)>=d)
            {
                x+=d/(j-i);
                d=dog_man;
                break;
            }
            else
            {
                d-=(j-i)*(a[j]+j-i-x);
                x=a[j]+j-i;
            }
        }
        
        mx=max((long long )mx,x);
    }
    
    for(int i=n;i>=1;i--) mx=max(mx,a[i]);
    
    cout<<mx<<endl;
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
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
int const MX=1e5+9;


struct point{
    int x,y;
};
double dis(point a,point b)
{
    double ans= (double)sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
    return ans;
}
bool can(point &a,point &b,point &p,double mid)
{
    if(dis({0,0},a)<=mid && dis(p,a)<=mid)return 1;
    else if(dis({0,0},b)<=mid && dis(p,b)<=mid)return 1;
    else if(dis({0,0},a)<=mid and dis(p,b)<=mid 
    && dis(a,b)<=2*mid   )return 1;
    else if(dis({0,0},b)<=mid && dis(p,a)<=mid
    &&   dis(b,a)<=2*mid)return 1;
    else return 0;
}


    

void solve()
{
    point a,b,p;
    cin>>p.x>>p.y>>a.x>>a.y>>b.x>>b.y;
   double l=0,r=1e5,mid,ans;
   for(int i=0;i<150;i++)
   {
       mid=(l+r)/2;
       if(can(a,b,p,mid))r=mid,ans=r;
       else l=mid;
   }
   cout<<fixed<<setprecision(7)<<ans<<endl;
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
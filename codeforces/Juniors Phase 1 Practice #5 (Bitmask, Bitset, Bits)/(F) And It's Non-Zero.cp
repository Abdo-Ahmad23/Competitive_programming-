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
int getbit(int n,int idx){/// idx is zero base

  return ((n>>idx)&1)==1;

}
int a[200000+9][21]={0};
void solve()
{
//    for(int i=0;i<21;i++)
//        for(int j=0;j<200000+9;j++)a[i][j]=0;
    int l,r;cin>>l>>r;
    int mx=0;
    for(int bit=0;bit<21;bit++)
        {
            mx=max(mx,a[r][bit]-a[l-1][bit]);
        }
    cout<<r-l+1-mx<<endl;
}
int32_t main()
{
    for(int i=1;i<=2e5;i++)
    {
        for(int bit=0;bit<21;bit++)
        {
            if(getbit(i,bit))a[i][bit]++;
            a[i][bit]+=a[i-1][bit];
        }
    }
    fast
    int t=1;cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";

        solve();
    }
    return 0;

}

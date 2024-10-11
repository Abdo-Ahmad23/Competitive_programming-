///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتلُ*///
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
#define int long long
int n,k;

void solve()
{
    int x,y;
    cin>>n>>k;
    vector<pair<int,int>>a;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        a.pb({x,y});

    }
    sort(all(a));
    int l=0,r=0,sum=0,mx=0;
    while(l<n and r<n)
    {
        if(a[r].F-a[l].F<k){
            sum+=a[r].S;
            mx=max(mx,sum);
            r++;
        }
        else {sum-=a[l].S,l++;}
    }
    cout<<mx<<endl;

}
int32_t main()
{
    fast
    int t=1;//cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;

}

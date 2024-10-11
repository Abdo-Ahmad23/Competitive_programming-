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
string to_binary(int n){string s="";
while(n){char ch;
int nn=n%2;n/=2;ch='0'+nn;
s=ch+s;}return s;
}
void solve()
{
   int l,r;cin>>l>>r;
   bitset<64>x(l),y(r);
   r=-1;
   for(int i=0;i<64;i++)
    if(x[i]!=y[i])r=i;
    r++;
   cout<<(r==0?r:((1LL<<r)-1));
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

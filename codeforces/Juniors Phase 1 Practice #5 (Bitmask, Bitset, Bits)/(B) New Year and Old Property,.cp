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
string to_binary(int n){string s="";
while(n){char ch;
int nn=n%2;n/=2;ch='0'+nn;
s=ch+s;}return s;
}

void solve()
{
    int cnt=0;
    int l,r;cin>>l>>r;
    map<int,int>vis;
    int s1=to_binary(l).size(),s2=to_binary(r).size();
    for(int i=s1;i<=s2;i++)
    {
        bitset<64>a(0);
        for(int j=0;j<i;j++)a[j]=1;
        for(int j=0;j<i-1;j++)
        {
            a[j]=0;
            int res=a.to_ullong();
            if(res>=l and res<=r)cnt++;
            a[j]=1;
        }
    }
    cout<<cnt<<endl;

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

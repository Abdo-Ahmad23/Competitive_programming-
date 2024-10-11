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
int getbit(int n,int idx){/// idx is zero base

  return ((n>>idx)&1)==1;

}
void solve()
{
   int n;cin>>n;
   int cnt=0;
   vector<int>a(n);
   for(auto &it:a)cin>>it;
   for(int i=1;i<(1<<n);i++)
   {
       int sum=0;

       for(int j=0;j<n;j++)
        if(getbit(i,j))sum+=a[j];
        else sum-=a[j];

        if(sum%360==0)cnt++;

   }
    cout<<(cnt==0?"NO":"YES")<<endl;
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

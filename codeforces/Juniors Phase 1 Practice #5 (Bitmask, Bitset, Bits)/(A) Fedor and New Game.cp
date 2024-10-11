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
int countbit1(int n)
{
    int cnt=0;
    while(n)
    {
        cnt++;
        n&=(n-1);
    }
    return cnt;
}
int setbit1(int n,int idx)/// idx is zero base
{
    return n|(1<<idx);

}
int setbit0(int n,int idx)
{
   return n&~(1<<idx);
}
int getbit(int n,int idx){/// idx is zero base

  return ((n>>idx)&1)==1;

}
int removelastfirstone(int n){

return n&(n-1);

}
int NBFO(int n){
return n&(-n);

}
int check_if_pow2(int num){
	return num&&!(num&(num-1));
}
int flipbit(int n,int idx){
return (n^(1<<idx));
}
void solve()
{
   int n,m,k;
   cin>>n>>m>>k;
    int cnt=0;
    vector<bitset<32>>v(m+1);
    for(int i=0;i<m+1;i++){
        int x;cin>>x;
        bitset<32>a(x);
        v[i]=a;
    }
    for(int i=0;i<m;i++){
        int cnt2=0;
        for(int bit=n-1;bit>=0;bit--){
            if(v[i][bit]!=v[m][bit])cnt2++;
        }
        if(cnt2<=k)cnt++;
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

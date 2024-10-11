///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتلُ*///
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define F first
#define S second
#define pb push_back
#define endl "\n";
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
//#define int long long
//int const NN=1e6;bool isprime[NN];
//void seive(){
//memset(isprime,true,sizeof isprime);
//isprime[0]=isprime[1]=false;
//for(int i=2;i*i<NN;i++)
//if(isprime[i])
//for(int j=i*i;j<NN;j+=i)
//isprime[j]=false;
//}
//bool pal(string s){
//int n=s.size();
//for(int i=0;i<n/2;i++)if(s[i]!=s[n-1-i])return 0;
//return 1;
//}
//long long power(int a,int b){
//if(a==1)
//return a;
//if(b==0)return 1;
//int ret=power(a,b/2);
//ret*=ret;
//if(b%2)ret*=a;
//return ret;
//}
//string to_binary(int n){string s="";
//while(n){char ch;
//int nn=n%2;n/=2;ch='0'+nn;
//s=ch+s;}return s;
//}
///*-------------------------------------------*/
//enum dir    { d, r, u, l, ul, dr, ur, dl};
//int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
//int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
///*-------------------------------------------*/
/////*-------------------------------------------*///
//bool checkPowTwo(int x){
//    return (x & -x) == x;
//}
//int sum(int n)
//{
//    return ((1+n)*n)/2;
//}
const int mx = 2e5+9;

int n,m,q,l[mx],r[mx],x[mx],ps[mx+1];
bool can(int tm){
	for(int i=0;i<tm;i++)ps[x[i]+1]=1;
	for(int i=1;i<=n;i++)ps[i]+=ps[i-1];
	bool res=0;
	for(int i=0;i<m;i++){
		if(ps[r[i]]-ps[l[i]]>r[i]-l[i]-ps[r[i]]+ps[l[i]])res=1;
	}
	for(int i=1;i<=n;i++)ps[i]=0;
	return res;
}

void solve(){
	cin>>n>>m;
	for(int i=0;i<m;i++)cin>>l[i]>>r[i],l[i]--;
	cin>>q;
	for(int i=0;i<q;i++)cin>>x[i];
	for(int i=0;i<q;i++)x[i]--;
	int tl=0,tr=q+1;
	while(tr-tl>1){
		int tm=tl+tr>>1;
		if(can(tm))tr=tm;
		else tl=tm;
	}
	cout<<(tr==q+1?-1:tr)<<endl;
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
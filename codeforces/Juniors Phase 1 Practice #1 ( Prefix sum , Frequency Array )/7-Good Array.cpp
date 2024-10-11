///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتلُ*///
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define ull unsigned long long
#define F first
#define S second
#define PB push_back//
#define endl "\n"
#define ll long long
#define pi 3.14159265358979323846264338327950288419716939937510
#define int long long
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
void strong1(){cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);}
int const NN=1e6;bool isprime[NN];void seive(){memset(isprime,true,sizeof isprime);isprime[0]=isprime[1]=false;for(int i=2;i*i<NN;i++)if(isprime[i])for(int j=i*i;j<NN;j+=i)isprime[j]=false;}
bool pal(string s){int n=s.size();for(int i=0;i<n/2;i++)if(s[i]!=s[n-1-i])return 0;return 1;}
long long power(int a,int b){if(a==1)return a;if(b==0)return 1;int ret=power(a,b/2);ret*=ret;if(b%2)ret*=a;return ret;}
string to_binary(int n){string s="";while(n){char ch;int nn=n%2;n/=2;ch='0'+nn;s=ch+s;}return s;}int getbit(int n,int idx){return ((n>>idx)&1)==1;}
int setbit(int n,int idx){return n|(1<<idx);}int BFO(int n){return (n&(n-1));}int NBFO(int n){return (n&(-n));}int check_if_pow2(int num){return (num&&!(num&(num-1)));}
int setbit0(int n,int idx){return (n&~(1<<idx));}int flipbit(int n,int idx){return (n^(1<<idx));}
///*-------------------------------------------*///
enum dir    { d, r, u, l, ul, dr, ur, dl};
int dx[4] = { 1, 0, 1, 0};
int dy[4] = { 0, 1, 1, -1};
///*-------------------------------------------*///

bool is_found(vector<int>&a,int n,int key)
{
    int l=0,r=n-1,mid;
    while(l<=r){
        mid=l+r>>1;
        if(a[mid]==key)return 1;
        else if(a[mid]>key)r=mid-1;
        else l=mid+1;
    }
    return 0;
}
int const N=1e6+9;
int fr[N];
void solve()
{
    int n;cin>>n;

    vector<int>a(n);
    int sum=0;
    for(int i=0;i<n;i++)cin>>a[i],sum+=a[i],fr[a[i]]++;
    vector<int>b(a);
    sort(all(b));
    vector<int>ans;
    for(int i=0;i<n;i++){
        if((sum-a[i])%2==0){
            if(is_found(b,n,((sum-a[i])/2))){
                int k=sum-a[i];
                k/=2;
                if(k==a[i]){
                    if(fr[a[i]]>=2)ans.PB(i+1);
                }
                else{
                    ans.PB(i+1);
                }
            }
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<' ';




}
int32_t main()
{
    /// Winning Abdostrong1
//   freopen("mex.in", "r", stdin);
    strong1();
    int t=1;///cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;

}

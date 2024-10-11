///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتلُ*///
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define ull unsigned long long
#define F first
#define S second
#define PB push_back
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
/// base case
/// state
///

void solve()
{
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int fr[26]{0};
    for(int i=0;i<n;i++){
        fr[s[i]-'a']++;
    }
    char ch;
    int x=k;
    if(k==n){
        cout<<""<<endl;
        return;
    }
    for(int i=0;i<26;i++){
        k-=fr[i];
        if(k<0){
            ch=i+'a';
            break;
        }
    }
    for(int i=0;i<ch-'a';i++)x-=fr[i];
    for(int i=0;i<n;i++){
        if(s[i]<ch)i+=0;
        else if(s[i]>ch)cout<<s[i];
        else{
            if(x>0)x--;
            else cout<<s[i];
        }
    }

}
int32_t main()
{
    /// Winning Abdostrong1
    strong1();
    int t=1;///scanf("%lld",&t);
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;

}
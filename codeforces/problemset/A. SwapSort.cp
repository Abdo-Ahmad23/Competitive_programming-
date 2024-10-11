///*، المسلم أخو المسلم ، لا يظلمه ، ولا يخذله ، ولا يكذبه ، ولا يحقره*///
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define ll long long
#define ull unsigned long long
#define F first
#define S second
#define PB push_back
#define endl "\n"
#define pi 3.14159265358979323846264338327950288419716939937510
///#define int long long
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
void strong1(){cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);}
int const NN=1e6;bool isprime[NN];void seive(){memset(isprime,true,sizeof isprime);isprime[0]=isprime[1]=false;for(int i=2;i*i<NN;i++)if(isprime[i])for(int j=i*i;j<NN;j+=i)isprime[j]=false;}
bool pal(string s){int n=s.size();for(int i=0;i<n/2;i++)if(s[i]!=s[n-1-i])return 0;return 1;}
long long power(int a,int b){if(a==1)return a;if(b==0)return 1;int ret=power(a,b/2);ret*=ret;if(b%2)ret*=a;return ret;}
#define int long long
string to_binary(int n){string s="";while(n){char ch;int nn=n%2;n/=2;ch='0'+nn;s=ch+s;}return s;}int getbit(int n,int idx){return ((n>>idx)&1)==1;}
int setbit(int n,int idx){return n|(1<<idx);}int BFO(int n){return (n&(n-1));}int NBFO(int n){return (n&(-n));}int check_if_pow2(int num){return (num&&!(num&(num-1)));}
int setbit0(int n,int idx){return (n&~(1<<idx));}int flipbit(int n,int idx){return (n^(1<<idx));}
/// __builtin_popcount(num);
/// __builtin_ctz(num); number zeros from begin
/// __builtin_clz(num); number zeros from end;
vector<pair<int,int>>vp;
void solve(){
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    ///for(auto it)
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            for(int j=i;j<n;j++){
                if(a[j]==b[i]){
                    vp.PB({i,j});
                    swap(a[i],a[j]);
                    break;
                }
            }
        }
    }
//    for(auto it:a)cout<<it<<' ';
//    puts("");
    /*

    8
1 2 3 5 6 6 8 8
1 2 3 5 6 6 8 8

    */
    cout<<vp.size()<<endl;
    for(int i=0;i<vp.size();i++){
        cout<<vp[i].F<<' '<<vp[i].S<<endl;
    }

}                  /// 1 3  2
int32_t main()/// 1    2 1 2 0
{strong1();
    int t=1;///cin>>t;
    while(t--){
        solve();

    }
    return 0;

}
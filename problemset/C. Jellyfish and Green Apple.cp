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
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

void fast(){cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);}

 
//#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
 

int const NN=1e6;bool isprime[NN];
void seive(){
memset(isprime,true,sizeof isprime);
isprime[0]=isprime[1]=false;
for(int i=2;i*i<NN;i++)
if(isprime[i])
for(int j=i*i;j<NN;j+=i)
isprime[j]=false;
}
bool pal(string s){
int n=s.size();
for(int i=0;i<n/2;i++)if(s[i]!=s[n-1-i])return 0;
return 1;
}

long long power(int a,int b){
if(a==1)
return a;
if(b==0)return 1;
int ret=power(a,b/2);
ret*=ret;
if(b%2)ret*=a;
return ret;
}

string to_binary(int n){string s="";
while(n){char ch;
int nn=n%2;n/=2;ch='0'+nn;
s=ch+s;}return s;
}



/*-------------------------------------------*/
enum dir    { d, r, u, l, ul, dr, ur, dl};
int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
/*-------------------------------------------*/
///*-------------------------------------------*///
bool checkPowTwo(int x){
    return (x & -x) == x;
}

void solve ()
{
   int n,m;cin>>n>>m;
   int cnt=0;
   int gc=__gcd(n,m);
   n-=m*((n/gc)/(m/gc));
   int tmpofn=n/gc;
   tmpofn =tmpofn%(m/gc);
   for(int i=1;i<=31;i++)
   {
       int tmp=1LL<<i;
       cnt+=n;
       n*=2;
       if(tmpofn>=(m/gc)/tmp)n-=m,tmpofn-=(m/gc)/tmp;
       if(tmpofn<1)break;
   }
   cout<<(__builtin_popcountll((m/gc))!=1?-1:cnt)<<endl;
   
    
}
int32_t main() {
    int t;cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
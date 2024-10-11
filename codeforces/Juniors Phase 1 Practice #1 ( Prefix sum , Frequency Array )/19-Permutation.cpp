#include<bits/stdc++.h>
#include<string>
using namespace std;

#define fast()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll       long long
#define EL  endl

string toBinary(int n){string r;while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}return r;}
ll gcd(ll a, ll b) { return a ? gcd(b % a, a) : b; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
bool isprim(int n){bool f=1;if(n==1||n==0)f=0; for(int i=2;i<=n/2;i++) { if(n%i==0){ f=0;return f; }}return f;}
int fact(int n){ if(n>1)return n*fact(n-1); else return 1; }
bool ispalindrom(string s){bool f=1;int size = s.size();for(int i=0;i<size/2;i++){if(s[i]!=s[size-1-i]){f=0;return f;  }}return f;}
void swap(int&x,int&y){int temp=x;x=y;y=temp;}
int todicemal(string s){int ans=0;int x=0;for(int i=s.size()-1;i>=0;i--){  if(s[i]=='1'){ans=ans+pow(2,x);}x++;}  return ans;}
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<==>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
long long sumEven(long long num){
  long long res = (num*(num+1));
  return res;
}  
void solve(){
}
ll n,q,cx,bx;
int main(){
  fast();
  freopen("mex.in","r",stdin);
  
  ll t;cin>>t;while(t--){
//    ll n,q;
  cin>>n>>q;
  ll a[n];
  for(ll i=0;i<n;i++){
    cin>>a[i];
  }
  ll b[n],c[n];
  cx=10000005,bx=10000005;
  for(ll i=n-1;i>=0;i--){
    bx=min(bx,a[i]);
    b[i]=bx;
  }
  for(ll i=0;i<n;i++){
    cx=min(cx,a[i]);
    c[i]=cx;
  }
  
  while(q--){
    ll l,r;
    cin>>l>>r;
    if(l==1&&r==n)cout<<n+1<<endl;
    else if(l==r){
      if(a[r-1]==1)cout<<2<<endl;
      else cout<<1<<endl;
    }else if(r==n)cout<<c[l-2]<<endl;
    else if(l==1)cout<<b[r]<<endl;
    else{
      cout<<min(b[r],c[l-2])<<endl;
    }
  }
  }
  return 0;  
}
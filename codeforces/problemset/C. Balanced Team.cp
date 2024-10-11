/*قال رسول الله صلى الله عليه وسلم:*/
/*المؤمن القوي خيرٌ وأحبُّ إلى الله من المؤمن الضعيف*/
/*وفي كلٍّ خير،*/
/*احرص على ما ينفعك*/
/* واستعن بالله ولا تعجز */
//========================================================================================================
/* قال رسول الله صلى الله عليه وسلم: (( أحبُّ العمل إلى الله عز وجل أدومه وإن قلَّ )).*/
//========================================================================================================
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
bool can(int mid){

}
void solve(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int ans=1;
    for(int i=0;i<n;i++){
        int l=0,r=n-1,mid,res;
        int cnt=0;
        while(l<=r){
            mid=(l+r)>>1;
            if(abs(a[mid]-a[i])<=5){
                l=mid+1;
                res=mid-i+1;

            }
            else{
                r=mid-1;
            }
        }
        ans=max(ans,res);
    }
    cout<<ans<<'\n';
}
int32_t main()
{
   strong1();
   int t=1;
   //cin>>t;
   for(int i=1;i<=t;i++){
    ///cout<<"Case #"<<i<<":\n";
    solve();
   }
    return 0;

}
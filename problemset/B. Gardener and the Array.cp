///*قَالَ مَعَاذَ اللَّهِ ۖ إِنَّهُ رَبِّي أَحْسَنَ مَثْوَايَ ۖ إِنَّهُ لَا يُفْلِحُ الظَّالِمُونَ*///
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
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
void strong1(){cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);}
int const NN=1e6;bool isprime[NN];void seive(){memset(isprime,true,sizeof isprime);isprime[0]=isprime[1]=false;for(int i=2;i*i<NN;i++)if(isprime[i])for(int j=i*i;j<NN;j+=i)isprime[j]=false;}
bool pal(deque<char>&s){int n=s.size();for(int i=0;i<n/2;i++)if(s[i]!=s[n-1-i])return 0;return 1;}
long long power(int a,int b){if(a==1)return a;if(b==0)return 1;int ret=power(a,b/2);ret*=ret;if(b%2)ret*=a;return ret;}
string to_binary(int n){string s="";while(n){char ch;int nn=n%2;n/=2;ch='0'+nn;s=ch+s;}return s;}int getbit(int n,int idx){return ((n>>idx)&1)==1;}
int setbit(int n,int idx){return n|(1<<idx);}int BFO(int n){return (n&(n-1));}int NBFO(int n){return (n&(-n));}int check_if_pow2(int num){return (num&&!(num&(num-1)));}
int setbit0(int n,int idx){return (n&~(1<<idx));}int flipbit(int n,int idx){return (n^(1<<idx));}
///*-------------------------------------------*///
	enum dir    { d, r, u, l, ul, dr, ur, dl};
	int dx[4] = { 1, 0, 1, 0};
	int dy[4] = { 0, 1, 1, -1};
///*-------------------------------------------*///
#define int long long
bool cmp(pair<int,int>&x,pair<int,int>&y){
    return x.F<y.F;
}
bool cmpp(pair<int,int>&x,pair<int,int>&y){
    return x.S<y.S;
}
void solve(){
    int n;cin>>n;
    vector<vector<int>>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int k;cin>>k;
        v[i].resize(k);
        for(auto &it:v[i]){
                cin>>it;
                mp[it]++;
        }
    }
    for(int i=0;i<n;i++){
        bool ok=1;
        for(auto it:v[i]){
            if(mp[it]==1){
                ok=0;
                break;
            }
        }
        if(ok){
        cout<<"YES"<<endl;
        return;
        }
    }
    cout<<"NO"<<endl;
}
int32_t main()
{strong1();
    int t=1;cin>>t;
    while(t--){
        solve();

    }
    return 0;

}
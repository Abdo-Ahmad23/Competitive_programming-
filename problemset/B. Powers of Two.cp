/*عن أبي هريرة رضي الله عنه ، قال : قال رسول الله صلى الله عليه وسلم : */
/* لا تحاسدوا ، ولا تناجشوا ، ولا تباغضوا ، ولا تدابروا ، ولا يبع بعضكم على بيع بعض */
/*، وكونوا عباد الله إخوانا ، المسلم أخو المسلم ، لا يظلمه ، ولا يخذله ، ولا يكذبه ، ولا يحقره */
/*  التقوى هاهنا - ويشير إلى صدره ثلاث مرات -  */
/* - بحسب امرئ من الشر أن يحقر أخاه المسلم ، كل المسلم على المسلم حرام : دمه وماله وعرضه */
//*
//**
//***
//****
//*****
/*   كل المسلم على المسلم حرام : دمه وماله وعرضه*/
/*   كل المسلم على المسلم حرام : دمه وماله وعرضه*/
/*   كل المسلم على المسلم حرام : دمه وماله وعرضه */
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
string to_binary(int n){
string s="";
  while(n){
    char ch;
    int nn=n%2;
    n/=2;
    ch='0'+nn;
    s=ch+s;
  }
  return s;

}
int getbit(int n,int idx){
return ((n>>idx)&1)==1;
}
int setbit(int n,int idx){
return n|(1<<idx);
}
int BFO(int n){
return (n&(n-1));
}
int NBFO(int n){
return (n&(-n));
}
int check_if_pow2(int num){
return (num&&!(num&(num-1)));
}
void solve(){
    int n;cin>>n;
    int a[n];
    map<int,int>mp,mp2;
    for(int i=0;i<n;i++)cin>>a[i],mp[a[i]]++,mp2[a[i]]=i;
    int cnt=0;
    for(int i=0;i<n;i++){
        mp[a[i]]--;
        for(int j=0;j<=32;j++){
            int res=1<<j;
            int ans=res-a[i];
            if(mp[ans])cnt+=mp[ans];
            ///mp[ans]--;
        }
    }
    cout<<cnt<<endl;

}
int32_t main()
{strong1();
    int t=1;///cin>>t;
    while(t--){
        solve();

    }
    return 0;

}
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
#define rall(x) rbegin(x), rend(x)
#define ll long long
#define dd double
#define lli long long int
#define ull unsigned long long
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define endl "\n"
#define pi 3.14159265358979323846264338327950288419716939937510
#define rep(i,a,b) for(int i = a; i < b; i++)

ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

void strong1()
{
  cin.tie(NULL);cout.tie(NULL);
  ios_base::sync_with_stdio(false);

}
	enum dir    { d, r, u, l, ul, dr, ur, dl};
	int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
	int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
int const NN=1e6;
bool isprime[NN];
void seive(){
    memset(isprime,true,sizeof isprime);
    isprime[0]=isprime[1]=false;
    for(int i=2;i*i<NN;i++){
        if(isprime[i]){
            for(int j=i*i;j<NN;j+=i){
                isprime[j]=false;
            }
        }
    }
}
bool pal(string s){
bool ok=0;
int n=s.size();
for(int i=0;i<n/2;i++){
    if(s[i]!=s[n-1-i]){
        ok=1;
        break;
    }
}
if(ok)
    return false;
else
    return true;
}

///ll sum=v[k][l]-v[k][j-1]-v[i-1][l]+v[i-1][j-1];

  ///vector<vector<ll>>v(n+1,vector<ll>(m+1));
//pal_clock
int a[5] = {600, 60, 0, 10, 1};
int good[16] = {0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412};
struct abdo{
string name;
int num;
};
#define int long long
bool cmp(abdo x,abdo y)
{
if (x.num!=y.num)
    return x.num>y.num;
return x.name<y.name;
}
///sizeof(a)/sizeof(a[0])==size of an array i dont know the size of it but it trick ya abooooda
ll nCr(ll n, ll r)
{
    r=max(r,n-r);
    if(n<r||r<0)return 0;
    ll ans = 1;
    ll div = 1;
    for (ll i = r + 1; i <= n; i++)
    {
        ans = ans * i;
        ans /= div;
        div++;
    }
    return ans;
}

ull qpow(ull a, ull b)
{
    ull ans = 1;
    while (b)
    {
        if (b & 1)
            ans = ans * a;
        a = a * a;
        b >>= 1;
    }
    return ans;
}
#define intt int
int divisors(int n){
   int cnt=0;
   for(int i=1;i<=n;i++)
    if(n%i==0)cnt++;
   return cnt;
}
bool pall(int n){
string s=to_string(n);
if(pal(s))return 1;
else return 0;
}
int goo(vector<int>&a,int &l,int &r){
sort(a.begin(),a.end());
int n=a.size();
for(int i=1;i<=n+1;i++){
    bool ok=binary_search(a.begin()+l-1,a.begin()+r,i);
    if(ok)
        continue;
    else {
        return i;
    }
}
}

string addBigNumbers(string number1, string number2) {
   if (number1.length() > number2.length())
    swap(number1, number2);
   string sum = "";
   int len1 = number1.length();
   int len2 = number2.length();
   int digitDiff = len2 - len1;
   int carry = 0;
   int intSum;
   for (int i=len1-1; i>=0; i--) {
      intSum = ((number1[i]-'0') + (number2[i+digitDiff]- '0') + carry);
      sum.push_back(intSum%10 + '0');
      carry = intSum/10;
   }
   for (int i=digitDiff-1; i>=0; i--) {
      intSum = ((number2[i]-'0')+carry);
      sum.push_back(intSum%10 + '0');
      carry = intSum/10;
   }
   if (carry)
    sum.push_back(carry+'0');
   reverse(sum.begin(), sum.end());
   return sum;
}
string multiplyTwoNumbers(string num1, string num2) {
   if (num1 == "0" || num2 == "0") {
      return "0";
   }
string product(num1.size() + num2.size(), 0);
   for (int i = num1.size() - 1; i >= 0; i--) {
      for (int j = num2.size() - 1; j >= 0; j--) {
            int n = (num1[i] - '0') * (num2[j] - '0') + product[i + j + 1];
            product[i + j + 1] = n % 10;
            product[i + j] += n / 10;
      }
   }
   for (int i = 0; i < product.size(); i++) {
      product[i] += '0';
   }
   if (product[0] == '0') {
      return product.substr(1);
   }
   return product;
}
// Driver code
int32_t main()
{
   int t;cin>>t;
   int n=t;
   string s[1000];
   int score[1000];
   map<string,int>mp1;
   for(int i=0;i<n;i++){
    cin>>s[i]>>score[i];
    mp1[s[i]]+=score[i];
   }
   int mx=LONG_MIN;
   ///auto it;
   for(auto it=mp1.begin();it!=mp1.end();it++){
    if(it->S>mx)
        mx=it->S;
   }
   map<string,int>mp2;
   for(int i=0;i<n;i++){
    if(mp1[s[i]]>=mx){
        mp2[s[i]]+=score[i];
        if(mp2[s[i]]>=mx){
            cout<<s[i]<<endl;
            return 0;
        }
    }
   }

return 0;
}
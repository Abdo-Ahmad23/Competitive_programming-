/*قال رسول الله صلى الله عليه وسلم:*/
/*المؤمن القوي خيرٌ وأحبُّ إلى الله من المؤمن الضعيف*/
/*وفي كلٍّ خير،*/
/*احرص على ما ينفعك*/
/* واستعن بالله ولا تعجز */
//========================================================================================================
/* قال رسول الله صلى الله عليه وسلم: (( أحبُّ العمل إلى الله عز وجل أدومه وإن قلَّ )).*/
//========================================================================================================
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define ll long long
#define dd double
#define lli long long int
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define endl "\n"
#define pi 3.142857143
#define rep(i,a,b) for(int i = a; i < b; i++)

ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

void strong1()
{
  cin.tie(NULL);cout.tie(NULL);
  ios_base::sync_with_stdio(false);
  #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
  #endif
}
	enum dir    { d, r, u, l, ul, dr, ur, dl};
	int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
	int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };

	bool pal(string s)
	{
	    bool ok=0;
	    int n=(int)s.size();
	    for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1])
            {
                ok=1;
                break;
            }
	    }
	    if(ok)
            return false;
        else
            return true;
	}
	int diff(string &s,string &k){
	int d=0;
	for(int i=0;i<s.size();i++){
        d+=abs(s[i]-k[i]);
	}
	return d;
	}
int main()
{
    int t;cin>>t;
    while(t--){
       int n;cin>>n;
       int a[n];
       ll cnt=0;
       for(int i=0;i<n;i++)cin>>a[i];
       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>=a[j])
                cnt++;
        }
       }
       cout<<cnt<<endl;
    }
    return 0;
}
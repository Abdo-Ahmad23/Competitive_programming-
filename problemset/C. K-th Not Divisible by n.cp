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
#define ddd double
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

void PLAY()
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
//====================================================================
ll sum_range(int k,int l,int i,int j ,vector<vector<int>> &s){
return s[k][l]-s[k][j-1]-s[i-1][l]+s[i-1][j-1];
}
//=========================================

int main()
{
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        cout<<k+(k-1)/(n-1)<<endl;
    }

    return 0;
}
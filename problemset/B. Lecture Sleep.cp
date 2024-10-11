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
#define ld long double
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

void STRONG()
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
    ll res=0;
    int n,m;cin>>n>>m;
    ll a[n];
    int b[n];
    /**
    bool ok=1;
    int k=1,kk=1,kkk=1;
    for(int i=1;i<=2*n;i++){
        if(ok){
            cin>>a[k];
            k++;
            ok=0;
        }
        else{
            cin>>b[kk];
            kk++;
            ok=1;
        }
    }
    **/

    /// enter your double arrays
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        cin>>b[i];
    /// the first step

    for(int i=1;i<=n;i++){
        if(b[i]==1){
            res+=a[i];
            a[i]=0;
        }
    }//accomulate
   /// for(int i=1;i<=n;i++)
        //cout<<a[i]<<" ";
    ///cout<<endl;
    for(int i=2;i<=n;i++){
        a[i]+=a[i-1];
    }
    ll mx=a[m];
    ll sum;
    for(int i=2;i<=n-m+1;i++)
    {
        sum=a[i+m-1]-a[i-1];
        mx=max(mx,sum);
    }
    cout<<res+mx<<"\n";
    return 0;
}
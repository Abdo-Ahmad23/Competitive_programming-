/* اللهم صلي وسلم وبارك علي سيدنا محمد */ 
#include<bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std; 
using namespace __gnu_pbds; 
#define all(x) begin(x), end(x) 
#define rall(x) rbegin(x), rend(x) 
#define ll long long 
#define lli long long int 
#define F first 
#define S second 
#define pb push_back 
#define endl "\n" 
#define debug(x) cout<<#x<<" = "<<x<<"\n" 
#define pi 3.142857143 
typedef complex<double> point; 
template<class T> using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; 
 
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); } 
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; } 
 
void setIO(string name = "") 
{ 
  cin.tie(NULL);cout.tie(NULL); 
  ios_base::sync_with_stdio(false); 
  #ifndef ONLINE_JUDGE 
   freopen((name + ".in").c_str(), "r", stdin);  
   freopen((name + ".out").c_str(), "w", stdout); 
  #endif 
} 
 
/*-------------------------------------------*/ 
    enum dir    { d, r, u, l, ul, dr, ur, dl}; 
    int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 }; 
    int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 }; 
/*-------------------------------------------*/ 
ll power (ll b, ll p, ll mod) 
{ 
  if(!p) return 1LL; 
  ll ret = power(b, p >> 1, mod); 
  ret *= ret; 
  ret %= mod; 
  if(p & 1LL) 
     ret = (ret * b) % mod; 
  return ret % mod; 
} 
 
void solve() 
{ 
 int n;cin>>n; 
 vector<int>a(n),b(n),ans; 
 for(int i=0;i<n;i++){ 
    cin>>a[i]; 
 } 
 for(int i=0;i<n;i++)cin>>b[i]; 
 for(int i=0;i<n;i++){ 
    ans.push_back(a[i]-b[i]); 
 } 
 ordered_set<int>st; 
   // reverse(all(ans)); 
    ll cnt=0; 
    for(int i=n - 1;i >= 0;i--){ 
 
        ll res=st.order_of_key(ans[i]); 
        cnt+=res; 
       /// cout<<i<<' '<<st.order_of_key(ans[i])<<endl; 
        ans[i]*=-1; 
        st.insert(ans[i]); 
    } 
    cout<<cnt<<endl; 
} 
int main(){ 
   setIO("c"); 
   int T = 1; 
  //  cin >> T; 
   while (T--) solve(); 
    return 0;  
}
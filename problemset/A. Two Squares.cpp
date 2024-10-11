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

bool cmp(abdo x,abdo y)
{
if (x.num!=y.num)
    return x.num>y.num;
return x.name<y.name;
}
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

int main()
{
    bool vis[300][300]{0};
    memset(vis,false,sizeof vis);
    int a1[10];
    int mn1=INT_MAX,mx1=0;
    int mn2=INT_MAX,mx2=0;
    for(int i=0;i<8;i++){
    cin>>a1[i];
    if(i%2==0){
        mn1=min(mn1,a1[i]);
        mx1=max(mx1,a1[i]);
    }
    else{
        mn2=min(mn2,a1[i]);
        mx2=max(mx2,a1[i]);
    }
    }
//    cout<<mn1<<' '<<mn2<<endl;
//    cout<<mx1<<' '<<mx2<<endl;
    for(int i=mn1;i<=mx1;i++){
        for(int j=mn2;j<=mx2;j++){
            vis[i][j]=true;
        }
    }
    ///YOU WILL DO IT KEEP STRONG 1600 IS LESS THAN YOUR POWER GOOOOOOO MAN ///
    bool ok=0;
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    if(vis[x1][y1]==true or vis[x2][y2]==true or vis[x3][y3]==true or vis[x4][y4]==true){
        cout<<"YES"<<endl;
        return 0;

    }
    vector<pair<int,int>>vp(4);
    vp[0].F=x1,vp[0].S=y1;
    vp[1].F=x2,vp[1].S=y2;
    vp[2].F=x3,vp[2].S=y3;
    vp[3].F=x4,vp[3].S=y4;
    sort(vp.begin(),vp.end());
    if(vp[1].S>vp[2].S)
        swap(vp[1].S,vp[2].S);
//    cout<<vp[0].F<<' '<<vp[0].S<<endl;
//    cout<<vp[1].F<<' '<<vp[1].S<<endl;
//    cout<<vp[2].F<<' '<<vp[2].S<<endl;
//    cout<<vp[3].F<<' '<<vp[3].S<<endl;

    int i=vp[0].F,j=vp[0].S;
    while(true){
        if(i==vp[1].F or j==vp[1].S)
            break;
        if(vis[i][j]){
            cout<<"YES"<<endl;
            return 0;
        }
        i++,j--;
    }
    i=vp[0].F,j=vp[0].S;
    while(true){
        if(i==vp[2].F or j==vp[2].S)
            break;
        if(vis[i][j]){
            cout<<"YES"<<endl;
            return 0;}
        i++,j++;
    }
    i=vp[3].F,j=vp[3].S;
    while(true){
        if(i==vp[1].F or j==vp[1].S)
            break;
        if(vis[i][j]){
            cout<<"YES"<<endl;
            return 0;}
        i--,j--;
    }
    i=vp[3].F,j=vp[3].S;
    while(true){
        if(i==vp[2].F or j==vp[2].S)
            break;
        if(vis[i][j]){
            cout<<"YES"<<endl;
            return 0;}
        i--,j++;
    }
    i=vp[1].F,j=vp[1].S;
    while(true){
        if(j==vp[2].S)
            break;
        if(vis[i][j]){
            cout<<"YES"<<endl;
            return 0;}
        j++;
    }
    i=vp[0].F,j=vp[0].S;
    while(true){
        if(i==vp[3].F)
            break;
        if(vis[i][j]){
            cout<<"YES"<<endl;
            return 0;}
        i++;
    }

//int i=vp[0].F,j=vp[0].S;
//while(true){
//    if(i==vp[1].F or j==vp[1].S)
//        break;
//    if(vis[i][j])
//    {
//        cout<<"YES"<<endl;
//        return 0;
//    }
//    i--,j++;
//}
//i=vp[0].F,j=vp[0].S;
//while(true){
//    if(i==vp[3])
//}







    cout<<"NO"<<endl;
//    ///KEEP STRONG ABOOODA YOU WILL DO IT :: abdostrong1
//    bool vis2[101][101]{0};
//    memset(vis2,false,sizeof vis2);
//    int a2[10];
//    int mnn1=INT_MAX,mxx1=0;
//    int mnn2=INT_MAX,mxx2=0;
//    a2[0]=x1,a[1]=y1,
//    a[2]=x2,a[3]=y2,
//    a2[4]=x3,a2[5]=y3,
//    a2[6]=x4,a2[7]=y4;
//    for(int i=0;i<8;i++){
//
//    if(i%2==0){
//        mnn1=min(mnn1,a2[i]);
//        mxx1=max(mxx1,a2[i]);
//    }
//    else{
//        mnn2=min(mnn2,a2[i]);
//        mxx2=max(mxx2,a2[i]);
//    }
//    }
//    cout<<mnn1<<' '<<mnn2<<endl;
//    cout<<mxx1<<' '<<mxx2<<endl;
//    for(int i=mnn1;i<=mxx1;i++){
//        for(int j=mnn2;j<=mxx2;j++){
//            vis2[i][j]=true;
//        }
//    }
//    bool go=0;
//    int xx1=a1[0],yy1=a1[1],xx2=a1[2],yy2=a1[3],xx3=a1[4],yy3=a1[5],xx4=a1[6],yy4=a1[7];
//    ///cin>>xx1>>yy1>>xx2>>yy2>>xx3>>yy3>>xx4>>yy4;
//    if(vis2[xx1][yy1]==true or vis2[xx2][yy2]==true or vis2[xx3][yy3]==true or vis2[xx4][yy4]==true){
//        cout<<"YES"<<endl;
//        return 0;
//    }
//
//        cout<<"NO"<<endl;
    return 0;
}
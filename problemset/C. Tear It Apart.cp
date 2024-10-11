///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتلُ*///
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
#define int long long
void solve()
{
    string s;cin>>s;
    int n=s.size(),mn=n;
    for(int i=0;i<26;i++)
    {
        int mx=LLONG_MIN,cnt=0;
        for(auto it:s){
            if(it==i+'a'){
                cnt=0;
                continue;
            }
            cnt++;
            mx=max(mx,cnt);

        }
        mn=min(mn,mx);
    }
    if(mn==LLONG_MIN)cout<<0<<endl;
    else cout<<(int)log2(mn)+1<<endl;
//    cout<<log2(mn)<<endl;
}
int32_t main(){
    fast
    int t=1;cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;

}
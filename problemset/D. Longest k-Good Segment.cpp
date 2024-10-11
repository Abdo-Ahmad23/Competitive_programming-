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
int const N=1e7;
int mp[N];
void solve()
{
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int l=0,r=0;
    int mx=0;
    set<int>st;
    pair<int,int>idx={0,0};

    while(l<n){
        while((r<n && st.size()==k && st.find(a[r])!=st.end()) or (r<n && st.size()<k)){
            st.insert(a[r]);
            mp[a[r]]++;
            r++;

        }
        if(r-l>mx)idx={l,r},mx=r-l;
        st.erase(st.find(a[l]));
        if(mp[a[l]]>1){
            st.insert(a[l]);
        }
            mp[a[l]]--;
        l++;
    }
    cout<<idx.F+1<<' '<<idx.S<<endl;

}
int32_t main()
{
    fast
    int t=1;///cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;

}
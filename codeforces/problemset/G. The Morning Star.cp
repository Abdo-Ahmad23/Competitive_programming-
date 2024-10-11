///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتل*///
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
int const MX=1e5+9; 
# define pii pair<int,int>
void solve()
{
    int n;cin >> n;
	map<pii,long long > mp;
	for (int i=0;i<n;i++) {
		int x,y;cin>>x>>y;
		mp[{x,INT_MAX}]++;
		mp[{0,y}]++;
		mp[{-1,y+x}]++;
		mp[{1,y-x}]++;
	}
	long long  ans=0;
	for (auto it:mp)
		if (it.S>=2)ans+=((it.S-1)*it.S/2);
	cout << ans*2 << "\n";
}

int32_t main()
{

    fast
    int t=1;cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;

}
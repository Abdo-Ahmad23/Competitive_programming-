///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتل*///
#include <bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define int long long 
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
int const MX=1e5+9;
void solve() {
           int n;cin>>n;
		vector<int>x(n),y(n);
		for(int i=0;i<n;i++)cin>>x[i]>>y[i];
		sort(all(x));
		sort(all(y));
		if(n%2)cout<<1<<endl;
		else{
			int ans = (x[n/2]-x[n/2-1]+1)*(y[n/2]-y[n/2-1]+1);
			cout<<ans<<endl;
		}

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
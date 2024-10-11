///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتل*///
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
#define int long long
int const MX=1e5+9;
void solve()
{
    int n;cin>>n;
    map<int,int>mp;
    vector<int>a(n+9);
        for (int i=0;i<n;i++)
        {
             int x;cin>>x;
            if (x<=n)
                mp[x]++;
            
        }
        for (int i=1;i<=n;i++)
        {
             if (mp[i]==0) continue;
            for (int j=i;j<=n;j+=i)
            {
                a[j]+=mp[i];
            }
            
        }
        
        sort(all(a));
        cout<<a.back()<<endl;
    
    
}
int32_t main()
{

    fast
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;

}
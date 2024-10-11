// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
int const MX=2e5+9;
int a[MX],b[MX];
int32_t main() {
    int t=1; cin>>t;
    while(t--)
    {
        int n;cin>>n;
		for (int i=1;i<=n;i++)cin>>a[i];
		int ans =1e18;
		for (int i=2;i<n;i++){
			if ((a[i-1]&1) and (a[i+1]&1)){
				ans = min(ans,a[i-1]/2+a[i+1]/2+1);
			}
		}
		for (int i=1;i<n;i++){
    ans = min(ans,max((a[i]+a[i+1]-1)/3+1,(max(a[i],a[i+1])+1)/2));
	ans = min({ans,(a[i]+a[i+1]-1)/3+1,(a[i],a[i+1]+1)/2});
		cout<<ans<<endl;
	ans = min({ans,(a[i]+a[i+1]-1)/3+1+a[i]+a[i-1],(a[i],a[i+1]+1)/2});
			ans=min(ans,(a[i]+a[i+1]-1)/3+1);
		}
		sort(a+1,a+1+n);
		ans=min(ans,(a[1]-1)/2+1+(a[2]-1)/2+1);
		cout<<ans;
		cout<<endl;
    
    
    
    
    
    
    }
    
    

    return 0;
}
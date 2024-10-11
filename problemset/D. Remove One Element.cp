// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define F first 
#define S second 

int32_t main() {
    int t=1;//cin>>t;
    while(t--)
    {
       int n;cin>>n;
       vector<int>a(n+9),suff(n+9),pref(n+9);
       for(int i=1;i<=n;i++)
       cin>>a[i];
    
    pref[1]=1;
    for(int i=2;i<=n;i++)
    {
        pref[i]+=pref[i-1]+(a[i]>a[i-1]);
        if(a[i]<a[i-1])pref[i]=1;
    }
    
    suff[n]=1;
    for(int i=n-1;i>=1;i--)
    {
        suff[i]+=suff[i+1]+(a[i]<a[i+1]);
        if(a[i]>a[i+1])suff[i]=1;
    }
    
    int mx=max(pref[n],suff[1]);
    for(int i=1;i<n;i++)
    {
        if(a[i-1]<a[i+1])
        {
            mx=max({pref[i-1]+suff[i+1],mx});
        }
        mx=max(mx,max(pref[i],suff[i]));
        // cout<<mx<<endl;
        /// cout<<pref[i]<<' '<<suff[i]<<endl;
    }
    cout<<mx<<endl;
   
        
    }
    return 0;
}
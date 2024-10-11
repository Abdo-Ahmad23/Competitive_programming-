// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    int t;cin>>t;
    while(t--){
    int n;cin>>n;
    bool ok=0;
    vector<int>a(n);
    for(auto &it:a)cin>>it;
    int sum=0,mx=-1e18;
    for(int i=0;i<n;i++){
        sum += a[i];
        mx=max(mx,a[i]);
        if(mx<sum){
           // cout<<"NO\n";
            ok=1;
            continue;
        }
        if(sum<0){
            sum=0;
            mx=-1;
        }
    }
    sum=0,mx=-1e18;
    for(int i=n-1;i>=0;--i){
        sum += a[i];
        mx = max(mx, a[i]);
        if(mx < sum){
            ok=1;
            continue;
        }
        if(sum<0){
            sum=0;
            mx=-1;
        }
    }
    for(int i=1;i<n;++i)
        if(a[i]>0&&a[i-1]>0){
            ok=1;
            continue;
        }
        if(!ok)
    cout<<"YES\n";
    else cout<<"NO\n";
    }
}
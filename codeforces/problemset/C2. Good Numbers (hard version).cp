// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define F first 
#define S second 
int power(int a,int b){
if(a==1)
return a;
if(b==0)return 1;
int ret=power(a,b/2);
ret*=ret;
if(b%2)ret*=a;
return ret;
}

int32_t main() {
    int t=1;cin>>t;
    while(t--)
    {
    int n;cin>>n;
    int ans = (power(3,39)-1)>>1;
    int t;
    for(int i=38;i>=0;i--){
        t=power(3,i);
        ans-=(ans-t>=n?t:0);
    }
    cout<<ans<<endl;
        
    }
    return 0;
}
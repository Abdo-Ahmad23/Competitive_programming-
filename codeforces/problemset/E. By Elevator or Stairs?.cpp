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
int ans[200000+9][2];
    
int32_t main() {
    int t=1;//cin>>t;
    while(t--)
    {
    int n,k;cin>>n>>k;
    vector<int>a(n+9),b(n+9);
    for (int i=1;i<n;i++)
        cin>>a[i];
    for (int i=1;i<n;i++)
        cin>>b[i];
    
    ans[2][0]=a[1];
    ans[2][1]=k+b[1];
    for (int i=3;i<=n;i++){
        ans[i][0]=min(ans[i-1][0],ans[i-1][1])+a[i-1];
        ans[i][1]=min(ans[i-1][0]+k+b[i-1],ans[i-1][1]+b[i-1]);
    }
    for (int i=1;i<=n;i++)
        cout<<min(ans[i][0],ans[i][1])<<' ';
        
    }
    return 0;
}
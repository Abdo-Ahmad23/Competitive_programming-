// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long 
int32_t main() {
    int t;cin>>t;
    while(t--)
    {
    int n;cin>>n;
    int mx=0,mn=1,cnt=0;
    vector<int>ans;
    for (int i=0,x;i<n;i++)
    {
        cin>>x;
        ans.pb(x);
    }
    for (int i=0;i<n;i++)
        if(ans.size()!=0 && ans[i]!=-1 and (i+1)==ans[ans[i]-1])
        {
            mx++;
            ans[i]=-1;
        }
        else if(ans[i]!=-1)cnt++;
    if(n%2)cnt++;
    if(cnt==n)mn=2;
    cout<<mn<<" "<<max(mn,mx)<<endl;
        
    }
    
    
    
    
    
    
    
    
    return 0;
}
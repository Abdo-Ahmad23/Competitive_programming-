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
        vector<int>a(n);
        int left,right;
        int val;
        for(auto &it:a)cin>>it;
        val=a[0];
        if(n==1){
          cout<<a[0]<<endl;
        }
        else if(val==n&&a[n-1]==val-1){
          cout<<val-1<<" ";
          for(int i=0;i<n-1;++i){
            cout<<a[i]<<" ";
          }cout<<endl;
        }
        else if(val==n){
          bool flag=false;
          int ind;
          for(int i=0;i<n;++i){
            if(flag){
                cout<<a[i]<<" ";
                
            }
            else{if(a[i]==n-1){
                flag=true;
                ind=i;
                cout<<a[i]<<" ";
                
            }
                
            }
          }
          vector<int>gh;
          for(int i=0;i<ind-1;++i){
            gh.pb(a[i]);
          }
          cout<<a[ind-1]<<" ";
          for(int it:gh){
            cout<<it<<" ";
          }cout<<endl;
        }
        else if(a[n-1]==n){
          int ind;
          cout<<a[n-1]<<" ";
          for(int i=n-2;i>=0;--i){
            if(a[i]>a[0]){
              cout<<a[i]<<" ";
            }
            else{
              ind=i;
              break;
            }
          }
          for(int i=0;i<=ind;++i){
            cout<<a[i]<<" ";
          }cout<<endl;
        }
        else{
          bool flag=false;
          int ind;
          for(int i=0;i<n;++i){
            if(flag){
                cout<<a[i]<<" ";
                
            }
            else{
              if(a[i]==n){
                flag=true;
                ind=i;
                cout<<a[i]<<" ";
              }
            }
          }
          int ind1=-1;
          vector<int>gh;
          cout<<a[ind-1]<<" ";
          for(int i=ind-2;i>=0;--i){
            if(a[i]>a[0]){
              cout<<a[i]<<" ";
            }
            else{
              // gh.pb(a[i]);
              ind1=i;
              break;
            }
          }
          for(int i=0;i<=ind1;++i){
            cout<<a[i]<<" ";
          }
          cout<<endl;
          // if(gh.size()!=0)
          //   for(int it:gh){
         // cout<<i<<" ";
              
         // }
          //cout<<endl;
        }
        
        
        
        
    }
    
    
    
    
    
    
    
    
    return 0;
}
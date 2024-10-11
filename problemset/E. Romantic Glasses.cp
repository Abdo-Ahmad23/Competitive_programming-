#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--)
    {
		map<long long,int>mp;
		mp[0]=1;
          int n;
		cin>>n;
		long long a[n+1]={};
		for(int i=1;i<=n;i++){
		     cin>>a[i];
		     if(i%2==0)a[i]*=-1;
		}
		for(int i=1;i<=n;i++)a[i]+=a[i-1],mp[a[i]]++;
		cout<<(mp.size()-1==n?"NO\n":"YES\n");
    }
    
    
     
     
     
     
     
     return 0;
}
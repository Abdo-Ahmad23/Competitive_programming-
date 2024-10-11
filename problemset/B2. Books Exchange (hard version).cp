// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define F first 
#define S second 

int32_t main() {
    int t=1;cin>>t;
    while(t--)
    {
      	int  n;cin>>n;
      	vector<int>a(n);
		for(auto &it:a){
		    cin>>it;
	    	it--;
		    
		}
		map<int,int>vis,num,ans;
		int cnt=0;
		for (int i=0;i<n;i++)
		{
			if (vis[i])continue;
			int tt=i;
			int res=0;
			while (!vis[tt])
			{
				vis[tt]=1;
				res++;
				num[tt]=cnt;
				tt=a[tt];
			}
			ans[cnt++]=res;
		}
		for (int i=0;i<n;i++)cout<<ans[num[i]]<<' ';
    	cout<<endl;
        
    }
    return 0;
}
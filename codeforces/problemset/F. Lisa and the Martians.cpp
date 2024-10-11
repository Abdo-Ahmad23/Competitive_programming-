// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
///تنساش تدعيلي بالزوجة الصالحة يا عمنا 
int32_t main() {
    fast
      int t;scanf("%ld",&t);
    while(t--){
     int n,k;scanf("%ld%ld",&n,&k);
   map<int,int>mp;
   vector<int>arr(n);
   int one=1;
   vector<map<int,int>>vis(k);
   int ans=1e15,a,b,x;
   for(int i=0;i<n;i++){
        scanf("%ld",&arr[i]);
        int val=0,num=arr[i];
        for(int j=k-1;j>=0;j--){
            if(vis[j][(num>>j)]){
                if(!((num>>j)&1))val+=(one<<j);
                continue;
            }
            val+=(one<<j);
            num=(num^(one<<j));
            continue;
        }
        if(ans>=(num^arr[i])){
            a=i+1;
            b=mp[num]+1;
            ans=(num^arr[i]);
            x=val;
            /// cout<<x<<endl;
        }
        mp[arr[i]]= i;
        for(int j=0;j<k;j++) {
            vis[j][(arr[i]>>j)]+=1;
        }
   }
   // cout<<ans<<" ";
   cout<<a<<" "<<b<<" "<<x<<endl;
  /// printf("%ld %ld %ld %ld\n",a,b,x);
 
    
    }
 
}
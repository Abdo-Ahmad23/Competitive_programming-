#include <bits/stdc++.h>
using namespace std;
#define int long long
#define S second
#define F first
#define pb push_back
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
   fast
    int n,m,k;
    vector<int>a(200009),sum(200009);
    int t;cin>>t;
    while(t--){
        cin>>n;
        vector<int>xr(2);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum[i]=sum[i-1]+a[i];
        }
        int l=1,r=n;
        for(int i=1;i<=n;i++){
            l=i;
            if(a[i]!=1)break;
        }
        for(int i=n;i>=1;i--){
            r=i;
            if(a[i]!=1)break;
        }
        if(l>=r){
            cout<<"1 1"<<endl;
            continue;
        }
        vector<pair<int,int>>v;
        int mx=1;
        for(int i=l;i<=r;i++){
            if(a[i]==1)continue;
            mx*=a[i];
            v.pb({a[i],i});
            if(mx>=n*2)break;
        }
        if(mx>=n*2){
            cout<<l<<' '<<r<<endl;
            continue;
        }

        for(int i=0;i<v.size();i++){
            int rr=1;
            for(int j=i;j<v.size();j++){
                rr*=v[j].F;
                int res=rr+sum[n]-sum[v[j].S]+sum[v[i].S-1];
                
                if(res>=mx){
                    mx=res;
                    l=v[i].S;
                    r=v[j].S;
                }
            }
        }
        cout<<l<<' '<<r<<endl;
    }

}

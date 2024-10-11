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
int ans[200000+9];
struct d
{
    int l,r,id;
};
int cmp(d a,d b)
{
	if(a.r != b.r) return a.r < b.r;
	return a.l < b.l;
}
int32_t main() {
    int t=1;//cin>>t;
    while(t--)
    {
        
        int n,k;cin>>n>>k;
        vector<d>a(n+9);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].l>>a[i].r;
        a[i].id=i;
    }
    sort(a.begin()+1,a.begin()+1+n,cmp);
    int r=0,now=0,tot=0;
    for(int i=1;i<=n;i++)
    {
        if(r<a[i].l)
        {
            now=1;
            r=a[i].r;
        }
        else
        {
            if(now<k)now++;
            else ans[++tot]=a[i].id;
        }
    }
    sort(ans+1,ans+1+tot);
    cout<<tot<<endl;
    for(int i=1;i<=tot;i++)cout<<ans[i]<<' ';
        
    }
    return 0;
}
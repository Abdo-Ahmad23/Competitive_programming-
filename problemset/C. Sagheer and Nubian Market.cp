#include <bits/stdc++.h>

using namespace std;
int const N=1e5+1;
long long b[N];
int n,s,a[N];
bool can(int k){
for(int i=0;i<n;i++)
    b[i]=1ll*a[i]+1ll*(i+1)*k;
sort(b,b+n);
long long tmp=0;
for(int i=0;i<k;i++)
    tmp+=b[i];
if(tmp<=s)
    return true;
return false;
}

int main()
{
    scanf("%d%d",&n,&s);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int l=0,r=n,mid,res=0;
    while(l<=r){
        mid=(l+r)/2;
        if(can(mid)){
            l=mid+1;
            res=mid;
        }
        else
            r=mid-1;

    }
    can(res);
    long long sum=0;
    for(int i=0;i<res;i++)
        sum+=b[i];
    cout<<res<<' '<<sum<<endl;
    return 0;
}
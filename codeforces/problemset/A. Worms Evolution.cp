#include <bits/stdc++.h>

using namespace std;

int main()
{
    ///map_way
    int n;
    scanf("%d",&n);
    int a[n+9];
    map<int,int>m;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        m[a[i]]=i;
    }
    int sum,x;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            sum=a[i]+a[j];
            x=m[sum];
            if(x>=1 and x<=n and x!=i and x!=j and i!=j){
                printf("%d %d %d ",x,i,j);
            return 0;

            }
        }
    }
    printf("%d",-1);
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
using lolo=long long;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
    scanf("%d%d",&n,&k);
        int a[n+9];
        lolo sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        ///cout<<sum<<endl;
        sort(a,a+n);
        int l=n-k-1,r=n-1;
        while(k--){
            sum-=a[l]+a[r];
            sum+=a[l]/a[r];
            --l,r--;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
/**

5
7 3
1 1 1 2 1 3 1>>>>>>> 1   1       1       1     1         2            3
5 1
5 5 5 5 5
4 2
1 3 3 7
2 0
4 2
9 2
1 10 10 1 10 2 7 10 3



**/
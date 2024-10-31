#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    scanf("%d", &t);
    while(t--){
        scanf("%d",&n);
        vector<int>a(n);
        for(auto &it:a)
            scanf("%d",&it);
        
        for(int i = 0;i<n-2;i++)
            {
                int d = a[i];
                a[i] = 0 ;
                a[i + 1] -= 2*d;
                a[i+2] -=d;
            }
        bool ok =1;
        for(auto it:a)
            if(it!=0)
                ok =0;
        if(ok){
            puts("YES");
        }else{
            puts("NO");
        }
    }

    return 0;
}
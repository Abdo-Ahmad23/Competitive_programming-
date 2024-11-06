#include <bits/stdc++.h>
using namespace std;
int getMult(int n){
    int mn = 10, mx = 0;
    while(n > 0){
        int mod = n%10;
        mn = min(mod, mn);
        mx = max(mod,mx);
        n/=10;
    }
    return mn * mx;
}
void solve(){
    int n,k;
    scanf("%d%d", &n, &k);
    while(k--){
        int res = getMult(n);
        n += res;
        if(res == 0)
            break;
        
    }
    printf("%lld\n",n);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }

    return 0;
}
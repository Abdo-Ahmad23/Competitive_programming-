#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, m, k;
    scanf("%d%d%d",&n,&m,&k);
    map<int,int>mp1,mp2;
    for(int i = 0 ;i < n;i++){
        int x;
        scanf("%d",&x);
        mp1[x]++;
           
    }
    
    for(int i = 0;i < m;i++){
        int x;
        scanf("%d", &x);
        mp2[x]++;
    }
    int cnt1=0,cnt2=0;
    for(int i = 1;i <= k;i++){
        if(!mp1[i] && !mp2[i]){
            puts("NO");
            return;
        }
        if(!mp1[i]){
            cnt1++;
        }else if(!mp2[i]){
            cnt2++;
        }
    }
    if(min(cnt1,cnt2)<k/2){
        puts("NO");
    }else{
        puts("YES");
    }
    
    
    

}
int main(){

    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }

    return 0;
}
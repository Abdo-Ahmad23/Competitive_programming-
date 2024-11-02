#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
    scanf("%d",&n);
    vector<int>a(n);
    for(auto &it:a)
        scanf("%d",&it);
    
    int cnt1 =0 ,cnt2 = 0;

    int i = 0;
    while(a[i] == a[0]){
        cnt1++,i++;
    }

    i = a.size() - 1;
    while(a[i] == a.back()){
        cnt2++,i--;
    }

    if(a.front() == a.back()){
        if(cnt1 + cnt2 >= n){
            puts("0");
        }else{
            printf("%d\n",n - cnt1 - cnt2);
        }
    }else{
        printf("%d\n",max(cnt1,cnt2));
    }

    }

    return 0;
}
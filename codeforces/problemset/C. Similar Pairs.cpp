#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n,odd = 0, even = 0;
        scanf("%d",&n);
        vector<int>a(n);

        for(auto &it:a){
            scanf("%d",&it);
            if(it&1)
                odd++;
            else
                even++;
        }
        sort(a.begin(),a.end());
        if(odd%2 == 0 and even%2 ==0){
            puts("YES");
        }else{
            bool ok = 0;
            for(int i=0;i<a.size() - 1;i++)
                if(a[i] == a[i+1] - 1)
                    ok = 1;
            if(ok){
                puts("YES");
            }else{
                puts("NO");
            }
            
        }
        
    }

    return 0;
}
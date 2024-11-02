#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, cnt = 0;
    scanf("%d", &n);
    vector<pair<long long, long long>>a(n);
    for(int i = 0;i < n;i++){
        scanf("%lld", &a[i].first);
        a[i].second = i + 1;
    }
    sort(a.begin(),a.end());
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(a[i].first * a[j].first > 2 * n)
                break;
            if(a[i].first * a[j].first == a[i].second + a[j].second)
                cnt++;
        }
    }
    cout << cnt << '\n';

}
int main(){ 

    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }

    return 0;
}
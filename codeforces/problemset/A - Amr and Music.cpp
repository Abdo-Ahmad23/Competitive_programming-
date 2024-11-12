#include <bits/stdc++.h>
using namespace std;
int sum ;
int main(){
     int n, k;
     cin >> n >> k;
     vector<pair<int, int>>a(n);
     for(int i = 0;i < n;i++){
          cin >> a[i].first;
          a[i].second = i;
     }
     sort(a.begin() ,a.end());
     vector<int> ans;
     int i = 0;
     while(sum + a[i].first <= k && i < n){
          sum += a[i].first;
          ans.push_back(a[i].second);
          i++;
     }
     cout << ans.size() << '\n';
     for(auto it:ans)
          cout << it + 1 << ' ';
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
     int n,m;
     cin >> n;
     vector<int>a(n);
     for(auto &it:a)
          cin >> it;
     
     cin >> m;
     vector<int>b(m);
     for(auto &it:b)
          cin >> it;
     
     vector<int>ans;
     for(int i = 0;i < n;i++){
          for(int j = 0;j < m;j++){
               if(b[j] % a[i] == 0){
                    ans.push_back(b[j] / a[i]);
               }
          }
     }
     
     cout << count(ans.begin(), ans.end(), *max_element(ans.begin(), ans.end()));
     
     
    return 0;
}
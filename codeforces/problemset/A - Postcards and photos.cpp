#include <bits/stdc++.h>
using namespace std;
int cnt;
int main(){
     string s;
     cin >> s;
     vector<char>ans;
     
     for(auto it:s){
          if(ans.size() >= 5){
               cnt++;
               ans.clear();
          }else if(find(ans.begin(),ans.end(),it) == ans.end()){
               cnt++;
               ans.clear();
          }
     ans.push_back(it);
     }
     cout << cnt << '\n';
    return 0;
}
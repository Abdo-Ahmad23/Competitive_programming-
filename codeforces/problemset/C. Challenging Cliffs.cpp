#include <bits/stdc++.h>
using namespace std;


void solve(){
     int n;
     cin >> n;
     vector<int>a(n);
     for(auto &it:a)
          cin >> it;
          
     sort(a.begin(), a.end());
     if(n == 2){
          cout << a[0] << ' ' << a[1]<<endl;
          return;
     }
     int idx = -1,mn=1e9;
     for(int i = 0 ;i<n - 1;i++){
          if(a[i+1] - a[i] < mn){
               mn = a[i+1] - a[i];
               idx = i;
          }
     }
     for(int i = idx+1;i<n;i++)
          cout<<a[i]<<' ';
     for(int i = 0 ;i<=idx;i++)
          cout<<a[i]<<' ';
     puts("");
          
}
int main(){
     int t;
     cin >> t;
     while(t--){
          solve();
     }
     
     return 0;
}
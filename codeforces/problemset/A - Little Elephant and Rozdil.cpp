#include <bits/stdc++.h>
using namespace std;
int sum ;
int main(){
     int n;
     cin >> n;
     vector<int>a(n);
     map<int,int>mp;
     for(int i = 0;i < n;i++){
          cin >> a[i];
          mp[a[i]] = i;
     }
     sort(a.begin(), a.end());
     
     if(n !=1 && a[0] == a[1]){
          puts("Still Rozdil");
     }else{
          cout << mp[a[0]] + 1;
     }
     
     
     
    return 0;
}
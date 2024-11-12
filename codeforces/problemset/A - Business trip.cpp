#include <bits/stdc++.h>
using namespace std;

int main(){
   int n = 12;
   int k;
   cin >> k;
   vector<int>a(n);
   for(auto& it:a)
     cin >> it;

   sort(a.begin(),a.end());
   reverse(a.begin(),a.end());
   
   int sum = 0, cnt = 0,i = 0;
   while(sum < k && i < n){
        sum += a[i];
        i++,cnt++;
   }
   if(sum >= k)
     cout << cnt ;
   else
     puts("-1");
    return 0;
}
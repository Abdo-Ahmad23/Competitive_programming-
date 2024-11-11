#include <bits/stdc++.h>
using namespace std;

int main(){
   int a, b, n;
   cin >> a >> b >> n;
   if(n >= abs(a) + abs(b) && (n - abs(a) - abs(b)) % 2 == 0){
        puts("YES");
   }else{
        puts("NO");
   }
     
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int sum1,sum2;
int main(){
     int n;
     cin >> n;
     int x;
     for(int i = 0;i < n;i++)
          cin >> x,sum1 |= x;
     
     for(int i = 0;i < n;i++)
          cin >> x,sum2 |= x;
     
     cout << sum1 + sum2 << '\n';
     
     return 0;
}
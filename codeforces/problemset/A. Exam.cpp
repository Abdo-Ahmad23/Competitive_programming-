#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n&1){
        cout << n / 2 << endl;
    }else{
        cout << n << endl;
    }
    for(int i = 1;i <=n/2;i++){
        cout << i << ' ' << i + ceil(n/2.0) << ' ';
    }


    return 0;
}
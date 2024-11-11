#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        if(x == 1)
            cnt++;
    }
    if(cnt and cnt != 1){
        cout << cnt + 1;
    }else{
        cout << cnt << '\n';
    }
    return 0;
}
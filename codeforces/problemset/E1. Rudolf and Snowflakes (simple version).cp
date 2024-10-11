#include <iostream>
#include<set>
using namespace std;

int main()
{ 
     int t;
    cin >>t;
     int boda=1e6;
    set<long long>st;
 
    for (int i=2;i<boda;i++){
        long long  l = i;
        long long  tot = i + 1;
        while (true) {
            long long nn = l * i;
            tot += nn;
            l = nn;
            if (tot > boda) break;
            st.insert(tot);
        }
    }
 
    while (t--) {
        int n;
        cin >> n;
 
        if (st.count(n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
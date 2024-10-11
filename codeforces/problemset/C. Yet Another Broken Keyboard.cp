// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
int const MX=2e5+9;
int32_t main() {
    int t=1;//cin>>t;
    while(t--)
    {
  
    int n,k;
    cin>>n>>k;
    string st;
    cin>>st;
 
    set<char>s;
    for (int i=0;i<k;i++) {
        char sim;cin>>sim;
        s.insert(sim);
    }
    st+='!';
    int j=0;
    int ans=0;
    n++;
 
    for (int i=0;i<n;i++){
        if (s.find(st[i])==s.end()) {j++;
        continue;
            
        }
        for (j=j;j<n;j++){
            if (s.find(st[j])==s.end()){ans+=(j-i);
            break;
                
            }
        }
    }
 
    cout<<ans;
    
    
    
    }
    
    

    return 0;
}
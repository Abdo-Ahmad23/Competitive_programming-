// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main(){
     int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(auto &it:a)cin>>it;
        string s;cin>>s;
        int q;cin>>q;
        for (int i=0;i<q;i++) {
            int tp;cin>>tp;
            if (tp==1){
                int l,r;cin>>l>>r;
                for (int j=l-1;j<r;j++)
                    if (s[j]=='0')s[j]='1';
                    else s[j]='0';
            }else if(tp==2){
                int g;cin>>g;
                int result=0;
                for (int j=0;j<n;j++) 
                    if (s[j]-'0'==g)
                        result^= a[j];
                cout<<result<<' ';
            }
        }
        cout<<endl;
    }
 
    return 0;
}
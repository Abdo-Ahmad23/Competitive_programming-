#include <bits/stdc++.h>

using namespace std;
bool lucky(int n){
string s=to_string(n);
bool ok=0;
int sz=s.size();
for(int i=0;i<sz;i++)
if(s[i]!='4' or s[i]!='7'){
    ok=1;
    break;
}
if(ok)
    return false ;
return true;
}
int main()
{
    int n,a,b,c,k;
    cin>>n>>a>>b>>c;
    int mx=0;
    int id,idd,iddd;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if((n-(i*a+j*b))%c==0){
                k=(n-(i*a+j*b))/c;
                if(i>=0 and j>=0 and k>=0){
                id=i,idd=j,iddd=k;
                mx=max(mx,i+j+k);

                }
            }
        }
    }
    ///cout<<id<<' '<<idd<<' '<<iddd<<endl;
    cout<<mx<<endl;
    return 0;
}
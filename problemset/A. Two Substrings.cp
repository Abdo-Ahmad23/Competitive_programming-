#include <iostream>

using namespace std;

int main()
{
    string s;cin>>s;
    bool ok=0,go=0;
    bool k=0;
    bool kk=0;
    int n=(int)s.size();
    for(int  i=0;i<n-1;i++){
        if(s[i]=='A' and s[i+1]=='B' and k==0){
            i+=1;
            ok=1;
            k=1;
        }
        else if(s[i]=='B' and s[i+1]=='A' and kk==0){
            i+=1;
            go=1;
            kk=1;
        }
    }
    if(ok==0 or go ==0){
        ok=0,go=0,k=0,kk=0;
        for(int i=n-1;i>0;i--){
            if(s[i]=='A' and s[i-1]=='B' and k==0){
            i-=1;
            ok=1;
            k=1;
        }
        else if(s[i]=='B' and s[i-1]=='A' and kk==0){
            i-=1;
            go=1;
            kk=1;
        }
        }
    }
    if(go and ok)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
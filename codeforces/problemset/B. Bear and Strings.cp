#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;cin>>s;
    int n=(int)s.size();
    int ans=0;
    for(int i=0;i<n-3;i++){
        for(int j=i;j<n-3;j++){
            if(s[j]=='b' and s[j+1]=='e' and s[j+2]=='a' and s[j+3]=='r')
                {
                ans+=(n-(j+3));
                break;
                }
        }

    }
    cout<<ans<<endl;
    return 0;
}
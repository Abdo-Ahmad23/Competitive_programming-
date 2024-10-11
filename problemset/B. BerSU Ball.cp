#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    int b[n];
    for(int i=0;i<n;i++)cin>>b[i];
    int k;cin>>k;
    int g[k];
    for(int i=0;i<k;i++)cin>>g[i];
    sort(b,b+n);
    sort(g,g+k);
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            if(abs(b[i]-g[j])<=1){
                c++;
                g[j]=-1;
                break;
            }
    }
    }
    cout<<c<<endl;
    return 0;
}
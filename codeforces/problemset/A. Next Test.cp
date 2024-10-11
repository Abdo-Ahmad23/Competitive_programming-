#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    int a[n+9];
    bool ok=0;
    for(int i=0;i<n;i++)cin>>a[i];sort(a,a+n);
    if(n==1 and a[0]==1)
    {
        cout<<2<<endl;
        return 0;
    }
    else if(a[0]>1){
        cout<<1<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        if(i!=n-1){

        if(a[i]-a[i+1]==0 or a[i]-a[i+1]==-1)
            continue;
        else {
            cout<<a[i]+1<<endl;
            ok=1;
            break;
        }
        }
        else {
            cout<<a[n-1]+1<<endl;
        }
    }
    //if(!ok)
        //cout<<a[n-1]+1<<endl;
    return 0;
}
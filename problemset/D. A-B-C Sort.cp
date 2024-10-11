// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
int arr[1000009],arrr[1000009];
int32_t main() {
    int t;cin>>t;
    while(t--)
    {
        int x,c;cin>>x;
        bool tr=1;
        for(int i=0;i<x;i++)
        {
            cin>>arr[i];
            arrr[i]=arr[i];
        }
        sort(arr,arr+x);
        c=x-1;
        if(x&1)
        {
            if(arr[0]!=arrr[0])
            {
                cout<<"NO"<<endl;
                continue;
            }
        }
        for(int i=x-1;i>=0;)
        {
            if(x%2==1 and i==0)
                break;
            if((arr[i]==arrr[c] and arr[i-1]==arrr[c-1]) or (arr[i-1]==arrr[c] and arr[i]==arrr[c-1]))
            {
                i-=2;
                c-=2;
            }
            else
            {
                tr=0;
                break;
            }
        }
        cout<<(tr?"YES":"NO")<<endl;
    
    
    
    
    
    
    
    
    }
    
    

    return 0;
}
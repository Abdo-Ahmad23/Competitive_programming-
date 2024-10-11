#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
#define lli long long int
#define pi 3.142857143
void strong()
{
  cin.tie(NULL);cout.tie(NULL);
  ios_base::sync_with_stdio(false);
  #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
  #endif
}


int main()
{
    strong();
    int t;
    //int c=1;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        bool ch=1;
        long long n2=sqrt(n);
        if(n2*n2-n!=0){
            cout<<"NO"<<endl;
        }
        else if(n==1){
            cout<<"NO"<<endl;
        }
        else {
            for(int i=2;i*i<=n2;i++){
                if(n2%i==0)
                    ch=0;
            }
            if(ch)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

    }

    return 0;
}
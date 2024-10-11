///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتلُ*///
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define ull unsigned long long
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define ll long long
#define pi 3.14159265358979323846264338327950288419716939937510
#define int long long
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

void solve()
{
    int n;cin>>n;
    stack<string>st;
    vector<string>v(n);
    map<string,int>fr;
    for(int i=0;i<n;i++)
        cin>>v[i],fr[v[i]]++;
    
     if(fr["Header"]!=1 or fr["EndHeader"]!=1){
          cout<<"WA"<<endl;
          return;
     }
     
    if(v[0]!="Header" or v[n-1]!="EndHeader"){
        cout<<"WA"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        string s=v[i];
        if(s=="EndHeader"){
            if(st.top()!="Header" or st.empty()){
                cout<<"WA"<<endl;
                return;
            }

            else st.pop();

        }
        else if(s=="EndCell"){
            if(st.top()!="Cell" or st.empty()){
                cout<<"WA"<<endl;
                return;
            }
            else st.pop();

        }
        else if(s=="EndRow"){
            if(st.top()!="Row" or st.empty()){
                cout<<"WA"<<endl;
                return;
            }
            else st.pop();

        }
        else if(s=="EndTable"){
            if(st.top()!="Table" or st.empty()){
                cout<<"WA"<<endl;
                return;
            }
            else st.pop();

        }
        else
        st.push(s);

    }
    cout<<"ACC"<<endl;
}
int32_t main()
{
    fast
    int t=1;//cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;

}

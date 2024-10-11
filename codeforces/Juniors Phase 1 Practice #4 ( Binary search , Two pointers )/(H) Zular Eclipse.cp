///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتلُ*///

#include <bits/stdc++.h>

using namespace std;

#define all(x) begin(x), end(x)

#define F first

#define S second

#define pb push_back

#define endl "\n"

#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);

#define int long long

int n;

vector<int>a;

int great(int x)

{

int l=0,r=n-1,mid,res=-1;

while(l<=r)

{

mid=l+r>>1;

if(x>=a[mid])res=mid,l=mid+1;

else r=mid-1;

}

return res;

}

void solve()

{

cin>>n;

a.resize(n);

vector<int>prf(n);

for(int i=0;i<n;i++)cin>>a[i];



sort(all(a));
for(int i=0;i<n;i++)prf[i]=a[i];
for(int i=0;i<n;i++)

if(i)prf[i]+=prf[i-1];



int q;cin>>q;

while(q--)

{

int x;cin>>x;

int c=great(x);

if(c==-1)

cout<<-1<<endl;

else cout<<c+1<<' '<<prf[c]<<endl;

}



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


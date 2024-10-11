#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;cin>>n;
    long long x[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    sort(x,x+n);
    long long r1=x[n-1];
    //cout<<r1<<endl;
    long long  m;cin>>m;
    long long y[m];
    for(int i=0;i<m;i++)
        cin>>y[i];
    sort(y,y+m);
    long long p1=y[m-1];
    //cout<<p1<<endl;
    long long k;cin>>k;
    long long z[k];
    for(int i=0;i<k;i++)
        cin>>z[i];
    sort(z,z+k);
    long long p2=z[0];
    //cout<<p2<<endl;
    long long a,b;cin>>a>>b;
    double ali=(p1*b*r1*r1);
    double abdo=(a*p2+b*p1);
    double hatem=ali/abdo;
    cout<<fixed<<setprecision(12)<<sqrt(hatem)<<endl;
    return 0;
}
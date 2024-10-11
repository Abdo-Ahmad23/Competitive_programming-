#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;
double ah(long long m,long long n)
{
    double sum=0;
    for(int i=1;i<=m;i++)
    {
        sum+=i*(pow(i,n)-pow(i-1,n))/(pow(m,n)*1.0);
    }
    return sum;
}
// صلى على محمد
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long n,m;
    cin>>m>>n;
    cout <<fixed << setprecision(12)<<ah(m,n);

}
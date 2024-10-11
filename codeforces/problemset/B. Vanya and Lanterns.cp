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
    int n,l;cin>>n>>l;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int max1=0,max2=0,max3=0;
    if(arr[0]!=0)
        max1=arr[0];
    if(arr[n-1]!=l)
        max2=l-arr[n-1];
    max3=max(max1,max2);// this one
    int max4=0;
    for(int i=n-1;i>=0;i--){
        max4=max(max4,arr[i]-arr[i-1]);//this two
    }
    double max6=(double)max3;
    double max5=(double)max((double)(max4/2.0),max6);
    cout<<fixed<<setprecision(10)<<max5<<endl;
    return 0;
}
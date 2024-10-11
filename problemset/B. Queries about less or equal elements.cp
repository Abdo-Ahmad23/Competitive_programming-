#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    vector<int>a(n),b(k);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<k;i++)
        scanf("%d",&b[i]);
    sort(a.begin(),a.end());
    for(int i=0;i<k;i++){
        int nn=upper_bound(a.begin(),a.end(),b[i])-a.begin();
        cout<<nn<<" ";
    }
    return 0;
}
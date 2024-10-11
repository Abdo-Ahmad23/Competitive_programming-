#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;cin>>n;int a[n+9];int c=0;for(int i=0;i<n;i++)cin>>a[i];sort(a,a+n);
    for(int i=1;i<n;i++){for(int j=0;j<i;j++){if(a[i]==a[j]){a[i]++,c++;}}}cout<<c<<endl;
	return 0;
}
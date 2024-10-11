// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
const int mx=1e6+9;
int a[mx],cnt[mx];
int main()
{
#define int long long 
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<=20;j++){
		
			if(a[i]&(1<<j))
				cnt[j]++;
		     
		}
			
		
	}
	int aboda=0;
	for(int i=1;i<=n;i++){
		int v=0;
		for(int j=0;j<=20;j++)
			if(cnt[j]){
				v+=(1<<j);
				cnt[j]--;
			}
		aboda+=v*v;
	}
	cout<<aboda;
	return 0;
}
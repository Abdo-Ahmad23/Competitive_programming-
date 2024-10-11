#include <bits/stdc++.h>
using namespace std;
//using ll=long long;
int main(int argc, char** argv) {
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	if(n%m==0){
		if((n/m)*b>a*n)
		cout<<a*n<<endl;
		else 
		cout<<(n/m)*b<<endl;
	}
	else 
	{
		int d=(n/m+1)*b;
		int dd=a*n;
		int ddd=(n/m)*b+(n%m)*a;
		cout<<min(d,min(dd,ddd));
		
	}
	return 0;
}
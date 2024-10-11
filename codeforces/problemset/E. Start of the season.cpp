#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=(i+j)%(n-1)+1;
        }
    }

	for (int i=0;i<n;i++)
        a[i][n-1]=a[n-1][i]=a[i][i],a[i][i]=0;
    for(int i=0;i<n;i++){
        for(int ii=0;ii<n;ii++)
        cout<<a[i][ii]<<' ';
        cout<<endl;
    }
    return 0;
}
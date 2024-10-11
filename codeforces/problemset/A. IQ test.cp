#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)
            even++;
        else
            odd++;

    }
    if(even>odd){
        for(int i=0;i<n;i++){
            if(arr[i]%2==1){
                cout<<++i;
                break;
            }
        }
    }
    if(even<odd){
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                cout<<++i;
                break;
            }
        }
    }
    return 0;
}
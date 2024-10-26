#include <bits/stdc++.h>
using namespace std;
struct dron{
    int num;
    int have;
    int need;
};
int main(){
    int n,m;
    cin>>n>>m;
    deque<dron>d;
    for(int i=0,x;i<n;i++)
    {
        cin>>x;
        if(x>m){
            d.push_back({i+1,m,x});
        }
    }
    
    while(d.size()>1){
         if(d.front().have+m>=d.front().need){
              d.pop_front();
         }else{
              d.push_back({d.front().num,d.front().have+m,d.front().need});
              d.pop_front();
         }
    }
    
    if(d.empty())
     cout<<n<<endl;
    else
     cout<<d.back().num;
    

    return 0;
}
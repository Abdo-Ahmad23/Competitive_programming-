// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
int32_t main() {
       int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n-1);
        for(auto &it:a)cin>>it;
        int arr_sum=((n+1)*(n))/2;
        bool possible=true;
        map<int,int>mp;
        if(a[n-2]==arr_sum){
            // cout<<"inside"<<endl;
            mp[a[0]]=1;
            int problems=0;
            int prob_val=-1;
            if(a[0]>n){
                problems++;
                prob_val=a[0];
            }
            for (int i=0;i<(n-2);i++){
                int cur_num=a[i+1]-a[i];
                if (cur_num>n){
                    problems++;
                    prob_val=cur_num;
                }
                if (mp.find(cur_num)==mp.end()) {
                    mp[cur_num]=1;
                }
                else{
                    mp[cur_num]++;
                    problems++;
                    prob_val=cur_num;
 
                }
            }
            if(problems>1){
                possible=false;
            }
            else {
                for (int i=1;i<=(prob_val/2);i++){
                    if(mp.find(i)==mp.end()&&mp.find(prob_val-i)==mp.end()){
                        possible=true;
                    }
                }
            }
        }
        else if(a[n-2]<arr_sum){
            // cout<<"inside second"<<endl;
            set<int>cur_set;
            cur_set.insert(a[0]);
            cur_set.insert(arr_sum-a[n-2]);
            for (int i=0;i<n-2;i++){
                cur_set.insert(a[i+1]-a[i]);
            }
            auto it=cur_set.end();
            it--;
            int last_num=*(it);
            if(cur_set.size()==n&&last_num==n)
                possible=true;
            
            else 
                possible=false;
            
        }
        else
            possible=false;
        
 
        
        cout<<(possible?"YES":"NO")<<endl;
 
    }
 
 
 
 
 
 
    
 
 
}
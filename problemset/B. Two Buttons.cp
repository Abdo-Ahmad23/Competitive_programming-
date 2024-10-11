/// حب الصحابة كلهم لي مذهبُ *** ومودة القربى بها أتوسلُ 
/// ولكلهم قدر وفضل ساطعُ *** لكنما الصديق منهم أفضلُ
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
int n,m;
bool vis[N];
queue<int>q;

int BFS(int n,int m){
    memset(vis, false, sizeof vis);
    while(!q.empty())
        q.pop();
    
    q.push(n);
    int lvl=0;
    int size;
    while(!q.empty()){
        size=q.size();
        while(size-- != 0){
            int fr = q.front();
            q.pop();
            
            vis[fr] = true;
            if(fr == m)
                return lvl;
            if(fr - 1 > 0 && !vis[fr - 1])
                q.push(fr-1);
            if(fr * 2 <= 2*m && !vis[fr*2])
                q.push(fr*2);
            
            
        }

        lvl++;
    }
    return lvl;

}
int main(){
    cin>>n>>m;
    
    cout<< BFS(n,m);

    return 0;
}
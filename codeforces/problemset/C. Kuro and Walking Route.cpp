#include<bits/stdc++.h>
using namespace std;
const int N = 3e5 + 1;
bool vis[N];
int n , x, y, p[N],countx,county,tmp;
vector<vector<int>>g;
vector<int>path;
queue<int>q;
void BFS(){
    q.push(x);
    vis[x]=true;
    p[x]=x;
    while(!q.empty()){
        int fr = q.front();
        q.pop();
        for(int i=0;i<g[fr].size();i++){
            if(!vis[g[fr][i]]){
                vis[g[fr][i]]=true;
                p[g[fr][i]]=fr;
                q.push(g[fr][i]);
            }
        }
    }

    int v=y;
    while(v!=p[v]){
        path.push_back(v);
        v=p[v];
    }

    path.push_back(x);
    
}
void DFS(int node){
    vis[node]=true;
    tmp++;
    for(int i=0;i<g[node].size();i++)
    {
        if(!vis[g[node][i]])
            DFS(g[node][i]);
    }
}
int main(){
    scanf("%d%d%d", &n, &x, &y);
    --y,--x;
    g.resize(n);
    for(int i=1,a,b;i<n;++i){
        scanf("%d%d", &a, &b);
        --a;
        --b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    long long totalPaths = 1ll * n * (n - 1);
    BFS();
    memset(vis,false,sizeof vis);
    vis[path[path.size()-2]]=true;// before the end node
    tmp=0;
    DFS(x);
    countx=tmp;
    
    memset(vis,false,sizeof vis);
    vis[path[1]]=true;/// after start node
    tmp=0;
    DFS(y);
    county=tmp;
    long long invalidPath = 1ll*countx*county;
    cout<<totalPaths - invalidPath<<'\n';
    
}
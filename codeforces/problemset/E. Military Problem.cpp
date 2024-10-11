#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 1 ;
vector<vector<int>>g;
vector<int>order;
int n, q , siz[N],idx[N];
bool vis[N];
int DFS(int node)
{
    vis[node] = true;
    idx[node + 1] = order.size();
    order.push_back(node + 1);
    int ret = 1;
    for(int i = 0 ; i < g[node].size();i++)
        if(!vis[g[node][i]])
            ret += DFS(g[node][i]);
    return siz[node + 1] = ret;


}
int main(){
    cin>>n>>q;
    g.resize(n);
    for(int i=1,p;i<n;i++)
    {
        cin>>p;
        --p;
        g[p].push_back(i);
    }
    for(int i=0;i<g.size();i++)
        sort(g[i].begin(),g[i].end());
     
    DFS(0);
    while(q-- != 0) {
    int u, k;
    scanf("%d %d", &u, &k);

    if(idx[u] + siz[u] < idx[u] + k)
      puts("-1");
    else
      printf("%d\n", order[idx[u] + k - 1]);
  }



    return 0;
}
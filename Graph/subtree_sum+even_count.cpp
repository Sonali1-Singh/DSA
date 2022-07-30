
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];  //adjacenecy List
/** Given Q queries , Q <=10^1e
 * In each query given V
 * Print subtree sum of V & Number of even number in subree of VB
**/
int subtree_sum[N];
int even_count[N];
//int val[N];
bool vis[N];

void dfs(int vertex, int par){
    if(vis[vertex])return;
    vis[vertex]=true;
    subtree_sum[vertex]+=vertex; //if value is given for each vertex then add: +=val[vertex]
    if(vertex%2==0)even_count[vertex]++;
    for(auto child: g[vertex]){
        if(child==par) continue;
        dfs(child,vertex);
        subtree_sum[vertex]+=subtree_sum[child];
        even_count[vertex] += even_count[child];
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n-1; ++i){
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);      //pushing connected nodes to node 'x'
        g[y].push_back(x);     // for undirected graph 
    }
    dfs(1,0); // with precompution, no need to call dfs for each query
    int q; //queries
    cin>>q;
    while(q--){
        int v;
        cin>>v;
        cout<<subtree_sum[v]<<" "<<even_count[v];
    }
    return 0;
}
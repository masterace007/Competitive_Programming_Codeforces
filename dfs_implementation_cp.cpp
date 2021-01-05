#include<bits/stdc++.h>
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);

using namespace std;

void addEdge(vector<int> adj[], int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFSutil(vector < bool > &visited, vector<int> adj[],int u){
    visited[u] = true;
    cout<<u<<" ";
    for(int i = 0; i < adj[u].size(); ++i){
        if(!visited[adj[u][i]])
            DFSutil(visited,adj,adj[u][i]);
    }
}

void DFS(vector<int> adj[],int V){
    vector<bool> visited(V,false);
    for(int i = 0; i < V ; ++i){
        if(!visited[i]){
            DFSutil(visited,adj,i);
        }
    }
}

void solve() {
	 int V = 5; 
  
    // The below line may not work on all 
    // compilers.  If it does not work on 
    // your compiler, please replace it with 
    // following 
    // vector<int> *adj = new vector<int>[V]; 
    vector<int> adj[V];
  
    // Vertex numbers should be from 0 to 4. 
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    DFS(adj, V); 
    return 0; 
}
}

int32_t main() {
	FASTIO;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
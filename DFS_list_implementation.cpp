#include<bits/stdc++.h>
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

class Graph{
	void DFSutil(int v,bool visited[]){
		visited[v] = true;
		list<int> :: iterator it;
		for(it = adj[v].begin() ; it != adj[v].end() ; ++it){
			if(!visited[*it])
				DFSutil(*it,visited);
		}
	}
	list<int>* adj;
	int V;
	public:
		void addEdges(int v, int w){
			adj[v].push_back(w);
		}
		Graph(int V){
			this->V = V;
			adj = new list<int>[V];
		}
		void DFS(int v){
			bool* visited = new bool[V];
			for(int i = 0; i < v; ++i){
				visited[i] = false;
			}
			DFSutil(v,visited);
		}
};

void solve() {
	Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.DFS(2);
	
	
}

int32_t main() {
	FASTIO;
#ifdef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
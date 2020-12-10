#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <queue>

using namespace std;

bool dfs_visited[1001] = {false};
bool bfs_visited[1001] = {false};
vector<int> dfs_result;
vector<int> bfs_result;

void dfs(map<int, set<int>> &g, int v){
	if(dfs_visited[v] == true)
		return;

	dfs_result.push_back(v);
	dfs_visited[v] = true;

	for(auto it = g[v].begin(); it != g[v].end(); it++)
		dfs(g, *it);
}

void bfs(map<int, set<int>> &g, int v){
	queue<int> q;
	q.push(v);

	bfs_result.push_back(v);
	bfs_visited[v] = true;

	while(!q.empty()){
		v=q.front();
		q.pop();

		for(auto it = g[v].begin(); it != g[v].end(); it++){
			if(bfs_visited[*it] == false){
				q.push(*it);
				bfs_visited[*it] = true;
				bfs_result.push_back(*it);
			}
		}
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m, v;
	cin >> n >> m >> v;
	
	map<int, set<int>> g;

	for(int i=0; i<n; i++){
		set<int> tmp;
		g[i+1] = tmp;
	}

	for(int i=0; i<m; i++){
		int a, b;
		cin >> a >> b;
		g[a].insert(b);
		g[b].insert(a);
	}

	dfs(g, v);
	cout << dfs_result[0];
	for(int i=1; i<dfs_result.size(); i++)
		cout << " " << dfs_result[i];
	cout << endl;
	
	bfs(g, v);
	cout << bfs_result[0];
	for(int i=1; i<bfs_result.size(); i++)
		cout << " " << bfs_result[i];
	cout << endl;
}

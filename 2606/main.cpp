#include <iostream>
#include <vector>
#include <map>
#include <queue>

using namespace std;

int main() {
	int n, m;

	cin >> n >> m;

	map<int, vector<int>> g;
	queue<int> q;

	bool* visited = new bool[n];
	for(int i=0; i<n; i++){
		vector<int> tmp;
		g[i] = tmp;
		visited[i] = false;
	}

	for(int i=0; i<m; i++){
		int a, b;
		cin >> a >> b;

		g[a-1].push_back(b-1);
		g[b-1].push_back(a-1);
	}
	
	q.push(0);

	int cnt = 0;

	while(!q.empty()){
		int v = q.front();
		q.pop();
		if(visited[v] == false) {
			visited[v] = true;
			cnt++;
			for(int i=0; i<g[v].size(); i++){
				q.push(g[v][i]);
			}
		}
	}

	cout << cnt-1 << endl;
}

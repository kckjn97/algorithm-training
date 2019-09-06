#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
	int n;
	unordered_map<int, vector<string>> m;
	
	cin >> n;
	for(int i=0; i<n; i++){
		int a;
		string b;
		cin >> a >> b;
		if(m.find(a) == m.end()){
			vector<string> vec;
			vec.push_back(b);
			m[a] = vec;
		}else
			m[a].push_back(b);
	}

	for(int i=1; i<=200;i++){
		if(m.find(i) == m.end())
			continue;
		for(int j=0; j<m[i].size(); j++)
			printf("%d %s\n", i, m[i][j].c_str());
	}
}

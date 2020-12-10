#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> vec;
	for(int i=0; i<n; i++){
		int x, y;
		cin >> x >> y;
		vec.push_back({x, y});
	}
	for(int i=0; i<n; i++){
		int k=0;
		for(int j=0; j<n; j++){
			if(i==j) continue;
			if(vec[i].first < vec[j].first && vec[i].second < vec[j].second)
				k++;
		}
		cout << k+1 << " ";
	}
	cout << endl;
}

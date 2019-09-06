#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
	if(a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main() {
	int n;
	vector<pair<int, int>> vec;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		vec.push_back({a, b});
	}
	sort(vec.begin(), vec.end(), compare);
	
	for(int i=0; i<vec.size(); i++)
		printf("%d %d\n", vec[i].first, vec[i].second);
}

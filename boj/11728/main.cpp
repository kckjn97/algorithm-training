#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m;
	cin >> n >> m;

	vector<int> vec;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}

	for(int i=0; i<m; i++){
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}
	
	sort(vec.begin(), vec.end());

	for(int i=0; i<vec.size(); i++)
		cout << vec[i] << " ";
	cout << "\n";
}

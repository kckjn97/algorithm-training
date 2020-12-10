#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector<int> vec;
	vec.reserve(n*n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int tmp = (i+1) * (j+1);
			vec.push_back(tmp);
		}
	}
	nth_element(vec.begin(), vec.begin()+(k-1), vec.end());
	cout << vec[k-1] << "\n";
	
}

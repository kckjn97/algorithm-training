#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> vec;

	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);	
	}

	int cluster;
	cin >> cluster;

	long sum = 0;
	
	for(int i=0; i<vec.size(); i++){
		sum += ((vec[i] + cluster - 1) / cluster ) * cluster;
	}
	cout << sum << endl;
}

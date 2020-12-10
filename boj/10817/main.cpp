#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> vec;
	for(int i=0; i<3; i++){
		int a;
		cin >> a;
		vec.push_back(a);
	}
	
	sort(vec.begin(), vec.end());
	cout << vec[1] << endl;
}

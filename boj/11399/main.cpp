#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	vector<int> vec;
	cin >> n;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}

	sort(vec.begin(), vec.end());

	int sum = 0;
	for(int i=0; i<vec.size(); i++){
		int p=0;
		for(int j=0; j<=i; j++){
			p+=vec[j];
		}
		sum+=p;
	}
	cout << sum << endl;

}

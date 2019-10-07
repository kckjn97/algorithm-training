#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	unsigned long long res = 1;
	vector<unsigned long long> vec;
	cin >> n;
	vec.push_back(1);
	for(int i=0; i<n; i++){
		unsigned long long tmp = 0;
		for(int j=0; j<=i; j++){
			tmp += vec[j]*vec[i-j];
		}
		vec.push_back(tmp);
	}
	cout << vec[n] << endl;
}

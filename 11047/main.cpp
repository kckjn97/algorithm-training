#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	vector<int> vec;

	cin >> n >> k;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}

	int out = 0;
	for(int i=n-1; i>=0; i--){
		if(k/vec[i] > 0){
			out += k/vec[i];
			k -= (k/vec[i]) * vec[i];
		}
	}

	cout << out << endl;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T;
	cin >> T;
	for(int test_case=0; test_case<T; test_case++){
		int tmp;
		int n;
		float sum = 0;
		vector<int> vec;
		cin >> n;

		for(int i=0; i<n; i++){
			cin >> tmp;
			sum += tmp;
			vec.push_back(tmp);
		}


		int cnt = 0;
		float avg = sum/n;
		for(int i=0; i<vec.size(); i++)
			if(vec[i] > avg)
				cnt++;
		cout << fixed;
		cout.precision(3);
		cout << 100.0 * cnt / n << "%" << endl;
	}
}

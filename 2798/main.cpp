#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int min_diff = m;
	vector<int> vec;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}
	sort(vec.begin(), vec.end());
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(vec[i] + vec[j] > m){
				j=n;
				break;
			}
			for(int k=j+1; k<n; k++){
				int sum = vec[i] + vec[j] + vec[k];
				if(sum > m){
					k=n;
					break;
				}
				if(min_diff > m-sum){
					min_diff = m-sum;
					if(min_diff == 0){
						i=j=k=n;
						break;
					}
				}
			}
		}
	}
	cout << m-min_diff << endl;
}

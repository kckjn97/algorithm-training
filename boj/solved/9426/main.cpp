#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> vec;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}

	int centor = (k+1)/2-1;
	long sum = 0;
	vector<int> tmp;
	tmp.resize(k);
	copy(vec.begin(), vec.begin()+k, tmp.begin());
	sort(tmp.begin(), tmp.end());
	sum += tmp[centor];
	for(int i=k; i<n; i++){
		for(auto it=tmp.begin(); it != tmp.end(); it++){
			if(*it == vec[i-k]){
				tmp.erase(it);
				break;
			}
		}

		for(auto it=tmp.begin(); it != tmp.end(); it++){
			if(*it > vec[i]){
				tmp.insert(it, vec[i]);
				break;
			}

		}
		if(tmp.size() != k)
			tmp.push_back(vec[i]);

		sum += tmp[centor];
	}

	cout << sum << endl;
}

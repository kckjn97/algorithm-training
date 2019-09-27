#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> vec;
	int tmp;
	int sum = 0;
	for(int i=0; i<9; i++) {
		cin >> tmp;
		sum += tmp;
		vec.push_back(tmp);
	}
	for(int i=0; i<9; i++){
		for(int j=i+1; j<9; j++){
			if(sum - vec[i] - vec[j] == 100){
				vec.erase(vec.begin()+j, vec.begin()+j+1);
				vec.erase(vec.begin()+i, vec.begin()+i+1);
				sort(vec.begin(), vec.end());
				for(int k=0; k<vec.size(); k++)
					cout << vec[k] << endl;
				return 0;
			}
		}
	}
	
}

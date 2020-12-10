#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;
	int add = 1;
	vector<int> vec;

	while(n < 999){
		n += add++;
		vec.push_back(n);
	}
	
	int bitmap[1001] = {0};
	for(int i=0; i<vec.size(); i++){
		for(int j=0; j<vec.size(); j++){
			if(vec[i] + vec[j] >= 1000)
				break;
			for(int k=0; k<vec.size(); k++){
				int sum = vec[i]+vec[j]+vec[k];
				if(sum > 1000)
					break;
				bitmap[sum] = 1;
			}
		}
	}
	
	int T;
	cin >> T;
	for(int i=0; i<T; i++){
		int k;
		cin >> k;
		cout << bitmap[k] << "\n";
	}
}

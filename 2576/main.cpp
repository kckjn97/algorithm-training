#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int sum = 0;
	int min = 100;
	vector<int> vec;
	for(int i=0; i<7; i++){
		int tmp;
		cin >> tmp;
		if(tmp%2 == 1){
			vec.push_back(tmp);
			if(min>tmp)
				min = tmp;
		}
	}

	for(int i=0; i<vec.size(); i++){
		sum += vec[i];
	}
	
	if(sum == 0){
		cout << -1 << endl;
	}else{
		cout << sum << endl;
		cout << min << endl;
	}
}

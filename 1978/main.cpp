#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int> val;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		val.push_back(tmp);
	}

	int cnt = val.size();
	for(int i=0; i<val.size(); i++){
		if(val[i] == 1){
			cnt --;
			continue;
		}
		for(int j=2; j<=val[i]/2; j++){
			if( val[i] % j == 0){
				cnt --;
				break;
			}
		}
	}
	cout << cnt << endl;
}

#include <iostream>

using namespace std;

int main() {
	int max_v=-1, max_idx=-1;
	for(int i=0; i<9; i++){
		int n;
		cin >> n;
		if(n > max_v){
			max_v = n;
			max_idx = i+1;
		}
	}
	cout << max_v << endl;
	cout << max_idx << endl;
}

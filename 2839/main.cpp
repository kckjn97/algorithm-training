#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for(int i=n/5; i>=0; i--){
		for(int j=0; j<=n/3; j++){
			int val = i*5 +j*3;
			if(val > n)
				break;
			if(val == n){
				cout << i+j << endl;
				return 0;
			}
		}
	}
	cout << -1 << endl;
}

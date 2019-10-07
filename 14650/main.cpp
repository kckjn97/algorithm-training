#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	if(n == 1){
		cout << 0 << endl;
		return 0;
	}
	int res = 2;
	for(int i=0; i<n-2; i++){
		res *= 3;
	}
	cout << res << endl;
}

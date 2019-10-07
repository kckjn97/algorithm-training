#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	if(n == 1){
		cout << 0 << endl;
		return 0;
	}
	unsigned long res = 2;
	unsigned int middle = 1;
	for(int i=0; i<n-2; i++){
		middle *= 3;
		if(middle > 1000000009) {
			res *= middle % 1000000009;
			res %= 1000000009;
			middle = 1;
		}
	}
	res *= middle % 1000000009;
	res %= 1000000009;
	cout << res << endl;
}

#include <iostream>

using namespace std;

int main() {
	int val[2] = {0,1};
	int n;
	cin >> n;

	for(int i=2; i<=n; i++){
		val[i%2] = val[0] + val[1];
	}
	cout << val[n%2] << endl;
}

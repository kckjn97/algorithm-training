#include <iostream>

using namespace std;

int main() {
	int n;
	int sum = 0;
	char buf[101];
	
	cin >> n >> buf;

	for(int i=0; i<n; i++){
		if(buf[i] == 0)
			break;
		sum += buf[i] - '0';
	}
	cout << sum << endl;
}

#include <iostream>

using namespace std;

int main() {
	int k;
	cin >> k;

	int cnt = 0;
	int a;
	for(int i=0; i<5; i++){
		cin >> a;
		if( a == k)
			cnt++;
	}

	cout << cnt << endl;
}

#include <iostream>

using namespace std;

int main() {
	int n;
	int cnt = 0;
	cin >> n;
	while(n>0){
		if(n%2 == 1)
			cnt++;
		n = n >> 1;
	}
	cout << cnt << endl;
}

#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for(int test_case=0; test_case<T; test_case++){
		int h, w, n;
		cin >> h >> w >> n;
		int a = (n-1)/h + 1;
		int b = (n-1)%h + 1;
		cout << b;
		if(a < 10)
			cout << "0";
		cout << a << endl;
	}
}

#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for(int test_case=0; test_case<T; test_case++){
		int a, b;
		cin >> a >> b;
		cout << "Case #" << test_case+1 << ": " << a+b << endl;
	}
}

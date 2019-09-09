#include <iostream>

using namespace std;

int main() {
	int T;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> T;
	for(int test_case=0; test_case<T; test_case++){
		int a, b;
		cin >> a >> b;
		cout << a+b << "\n";
	}
}

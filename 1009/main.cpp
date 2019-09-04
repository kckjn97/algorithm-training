#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for(int test_case=0; test_case<T; test_case++){
		int a, b;
		cin >> a >> b;
		int val=1;
		for(int i=0; i<b; i++)
			val = (val*a) % 10;
		if (val == 0)
			val = 10;
		cout << val << endl;
	}
}

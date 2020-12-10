#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for(int test_case=0; test_case<T; test_case++){
		int a,b;
		scanf("%d,%d", &a, &b);
		printf("%d\n", a+b);
	}
}

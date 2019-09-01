#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a=1;
	while(a<n)
		a *= 2;
	if( a==n) cout << 1 << endl;
	else cout << 0 << endl;
}

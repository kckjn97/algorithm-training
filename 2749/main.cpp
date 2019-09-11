#include <iostream>

using namespace std;

int main() {
	long n;
	cin >> n;

	int a[2]={0,1};
	
	n %= 1500000;
	for(long i=2; i<=n; i++){
		a[i%2]=(a[0]+a[1]) % 1000000;
	}
	cout << a[n%2] << endl;
}

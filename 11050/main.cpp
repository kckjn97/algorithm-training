#include <iostream>

using namespace std;

int main() {
	int n, k;
	long res = 1;
	cin >> n >> k;
	for(int i=0; i<k; i++)
		res *= n--;
	for(int i=k; i>0; i--)
		res /= i;
	cout << res << endl;
}

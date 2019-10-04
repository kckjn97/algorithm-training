#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int s = 2;
	int a = 1;
	for(int i=0; i<n; i++){
		s+=a;
		a*=2;
	}
	s = s*s;
	cout << s << endl;
}

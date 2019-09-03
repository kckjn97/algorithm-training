#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a1=1;
	int a2=0;
	int a0;

	if(n==1)
		a0 = a1;
	else if(n==0)
		a0 = a2;
	else{
		for(int i=2; i<n+1; i++){
			a0=a1+a2;
			a2=a1;
			a1=a0;
		}
	}

	cout << a0 << endl;
}

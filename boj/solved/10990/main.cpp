#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=n-1-i; j>0; j--)
			cout << " ";
		cout << "*";
		for(int j=0; j<i; j++)
			cout << " ";
		for(int j=0; j<i-1; j++)
			cout << " ";
		if(i>0)
			cout << "*";
		cout << endl;
	}
}

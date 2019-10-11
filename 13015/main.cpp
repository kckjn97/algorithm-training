#include <iostream>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for(int i=0; i<n; i++)
		cout << "*";
	for(int i=0; i<(n-2)*2+1; i++)
		cout << " ";
	for(int i=0; i<n; i++)
		cout << "*";
	cout << endl;
	for(int i=1; i<n; i++){
		for(int j=0; j<i; j++)
			cout << " ";
		cout << "*";
		for(int j=0; j<n-2; j++)
			cout << " ";
		cout << "*";
		for(int j=0; j<(n-2-i)*2+1; j++)
			cout << " ";
		if(i !=n-1)
			cout << "*";
		for(int j=0; j<n-2; j++)
			cout << " ";
		cout << "*" << endl;
	}

	for(int i=2; i<n; i++){
		for(int j=0; j<(n-i); j++)
			cout << " ";
		cout << "*";
		for(int j=0; j<n-2; j++)
			cout << " ";
		cout << "*";
		for(int j=0; j<(i-2)*2+1; j++)
			cout << " ";
		cout << "*";
		for(int j=0; j<n-2; j++)
			cout << " ";
		cout << "*" << endl;
	}
	for(int i=0; i<n; i++)
		cout << "*";
	for(int i=0; i<(n-2)*2+1; i++)
		cout << " ";
	for(int i=0; i<n; i++)
		cout << "*";
	cout << endl;
}

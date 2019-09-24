#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	if(n==1){
		cout << "*" << endl;
		return 0;
	}
	string str = "";
	str += "*";
	for(int i=0; i<(n-1)/2; i++)
		str += " *";
	str += "\n";
	for(int i=0; i<n/2; i++)
		str += " *";
	str += "\n";
	for(int i=0; i<n; i++)
		cout << str;
}

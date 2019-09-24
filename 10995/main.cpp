#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	string str = "";
	str += "*";
	for(int i=1; i<n; i++)
		str += " *";
	
	for(int i=0; i<n; i++){
		if(i%2 == 1)
			cout << " ";
		cout << str << endl;
	}
}

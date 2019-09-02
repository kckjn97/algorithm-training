#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;

	const char* c_str = str.c_str();
	for(int i=0; i<str.size(); i++){
		cout << c_str[i];
		if( i%10 == 9)
			cout << endl;
	}
	cout << endl;
}

#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;
	cout << str.at(0);
	for(int i=1; i<str.size(); i++)
		if(str.at(i) == '-')
			cout << str.at(i+1);
	cout << endl;
}

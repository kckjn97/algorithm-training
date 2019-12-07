#include <iostream>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str[4];
	for(int i=0; i<4; i++)
		cin >> str[i];

	string _str[2];
	_str[0] = str[0]+str[1];
	_str[1] = str[2]+str[3];

	cout << stol(_str[0]) + stol(_str[1]) << "\n";
}

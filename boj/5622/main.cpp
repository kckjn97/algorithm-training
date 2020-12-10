#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;
	int res = 0;
	for(int i=0; i<str.size(); i++){
		if(str[i] == 'Z')
			str[i] -= 2;
		else if(str[i] >= 'S')
			str[i] -= 1;
		res += (str[i] - 'A') / 3 + 3;
	}
	cout << res << endl;
}

#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;
	int res = 0 ;
	for(int i=0; i<str.size(); i++){
		int tmp;
		res *= 16;
		if(str[i] >= 'A')
			tmp = str[i]-'A'+10;
		else
			tmp = str[i]-'0';
		res += tmp;
	}
	cout << res << endl;
}

#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for(int test_case=0; test_case<T; test_case++){
		int k;
		string str;
		cin >> k >> str;
		int oct=0;
		int hex=0;
		int dex=stoi(str);
		for(int i=0; i<str.size(); i++){
			oct *= 8;
			if(str[i] == '9' || str[i] == '8'){
				oct = 0;
				break;
			}
			oct += str[i] - '0';
		}
		for(int i=0; i<str.size(); i++){
			hex *= 16;
			hex += str[i] - '0';
		}
		cout << k << " " << oct << " " << dex << " " << hex <<endl;
	}
}

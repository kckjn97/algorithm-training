#include <iostream>
#include <vector>

using namespace std;

int main() {
	int input;
	string str;
	cin >> str;
	if(str == "0"){
		cout << 0 << endl;
		return 0;
	}
	for(int i=0; i<str.size(); i++){
		switch(str[i]){
		case '0':
			if(i!=0)
				cout << "000";	
			break;
		case '1':
			if(i==0)
				cout << "1";
			else
				cout << "001";
			break;
		case '2':
			if(i==0)
				cout << "10";
			else
				cout << "010";
			break;
		case '3':
			if(i==0)
				cout << "11";
			else
				cout << "011";
			break;
		case '4':
			cout << "100";
			break;
		case '5':
			cout << "101";
			break;
		case '6':
			cout << "110";
			break;
		case '7':
			cout << "111";
			break;
		}
	}
	cout << endl;
}

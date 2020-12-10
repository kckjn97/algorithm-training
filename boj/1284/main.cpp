#include <iostream>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;
	while(str != "0"){
		int res = str.size()+1;
		for(int i=0; i<str.size(); i++){
			if(str[i] == '1')
				res += 2;
			else if(str[i] == '0')
				res += 4;
			else
				res += 3;
		}
		cout << res << "\n";
		cin >> str;	
	}
}

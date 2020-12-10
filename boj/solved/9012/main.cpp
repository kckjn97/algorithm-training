#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for(int test_case=0; test_case<T; test_case++){
		string str;
		cin >> str;
		int cnt = 0;
		for(int i=0; i<str.size(); i++){
			if(str[i] == '('){
				cnt++;
			}else if(str[i] == ')'){
				cnt--;
				if(cnt < 0)
					break;
			}
		}
		
		if(cnt == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}

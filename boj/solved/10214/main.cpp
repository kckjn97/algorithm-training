#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for(int test_case=0; test_case<T; test_case++){
		int yonsei = 0;
		int korea = 0;

		for(int i=0; i<9; i++){
			int tmp1,tmp2;
			cin >> tmp1 >> tmp2;
			yonsei += tmp1;
			korea += tmp2;
		}

		if(yonsei > korea)
			cout << "Yonsei" << endl;
		else if(yonsei == korea)
			cout << "Draw" << endl;
		else
			cout << "Korea" << endl;
	}
}

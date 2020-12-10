#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for(int test_case=0; test_case<T; test_case++){
		int n;
		string str;
		cin >> n;
		cin >> str;
		for(int i=0; i<str.size(); i++){
			for(int j=0; j<n; j++)
				cout << str.at(i);
		}
		cout << endl;
	}
}

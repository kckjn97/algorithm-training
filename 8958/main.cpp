#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for(int test_case=0; test_case<T; test_case++){
		string str;
		cin >> str;
		int sum=0;
		int consq=0;
		char prev;
		for(int i=0; i<str.size(); i++){
			if(str.at(i) == 'O'){
				consq++;
				sum+=consq;
			}else if(str.at(i) == 'X'){
				consq=0;
			}
		}
		cout << sum << endl;
	}
}

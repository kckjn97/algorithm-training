#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int T;
	cin >> T;
	for(int test_case=0; test_case<T; test_case++){
		string n;
		cin >> n;
		string rev;
		for(int i=n.size()-1; i>=0; i--)
			rev += n[i];

		int int_n = stoi(n);
		int int_rev = stoi(rev);
		
		int sum = int_n +int_rev;
		string str = to_string(sum);

		bool symmetry = true;
		for(int i=0; i<str.size()/2; i++){
			if(str[i] != str[str.size() - 1 -i]){
				symmetry = false;
				break;
			}
		}

		if(symmetry)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}

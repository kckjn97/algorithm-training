#include <iostream>
#include <sstream>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	
	for(int test_case=0; test_case<T; test_case++){
		string str;
		getline(cin, str);
		while(str == "")
			getline(cin, str);
		
		string word;
		stringstream ss(str);
		getline(ss, word, ' ');
		float n = stof(word);
		while(getline(ss, word, ' ')){
			if(word == "@")
				n *= 3;
			else if(word == "%")
				n += 5;
			else if(word == "#")
				n -= 7;
		}
		cout << fixed;
		cout.precision(2);
		cout << n << "\n";
	}
}

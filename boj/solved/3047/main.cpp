#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n[3];
	cin >> n[0] >> n[1] >> n[2];
	sort(n, n+3);

	string str;
	cin >> str;
	for(int i=0; i<str.size(); i++){
		if(str.at(i) == 'A')
			cout << n[0];
		else if(str.at(i) == 'B')
			cout << n[1];
		else if(str.at(i) == 'C')
			cout << n[2];
		
		if(i != str.size() - 1)
			cout << " ";
	}
	cout << endl;
}

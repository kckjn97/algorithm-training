#include <iostream>

using namespace std;

int main() {
	int off['z'-'a'+1] = {0};
	string str;
	cin >> str;
	for(int i=0; i<str.size();i++){
		if(!off[str.at(i)-'a'])
			off[str.at(i)-'a'] = i+1;
	}
	for(int i=0; i<'z'-'a' + 1; i++)
		cout << off[i] - 1 << " " ;
	cout << endl;
}

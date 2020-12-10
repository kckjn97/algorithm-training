#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	string* str = new string[n];

	for(int i=0; i<n; i++)
		cin >> str[i];
	
	bool b = false;
	string res = str[0];
	for(int i=0; i<str[0].size(); i++){
		b = false;
		for(int j=0; j<n; j++){
			for(int k=j+1; k<n; k++){
				if( str[j][i] != str[k][i] ){
					res[i] = '?';
					b = true;
					break;
				}
			}
			if(b) break;
		}
	}
	cout << res << endl;
}

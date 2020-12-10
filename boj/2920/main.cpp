#include <iostream>

using namespace std;

int main() {
	int n[8];
	for(int i=0; i<8; i++)
		cin >> n[i];
	int diff = n[1] - n[0];
	string res = "";
	for(int i=2;i<8; i++){
		if(diff != n[i] - n[i-1]){
			res = "mixed";
			break;
		}
	}

	if(res == "" && diff == -1)
		res = "descending";
	else if(res == "" && diff == 1)
		res = "ascending";
	
	cout << res << endl;
}

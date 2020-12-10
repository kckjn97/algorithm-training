#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n[3];
	while(cin >> n[0] >> n[1] >> n[2]){
		if(n[0] == 0 && n[1] == 0 && n[2] == 0)
			break;
		sort(n, n+3);
		if(n[0]*n[0] + n[1]*n[1] == n[2]*n[2])
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
}

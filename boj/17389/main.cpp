#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	char c;
	int bonus = 0;
	int sum = 0;
	for(int i=0; i<n; i++){
		cin >> c;
		if(c == 'O'){
			sum += bonus + i + 1;
			bonus++;
		}else if(c == 'X'){
			bonus = 0;
		}
	}
	cout << sum << endl;
}

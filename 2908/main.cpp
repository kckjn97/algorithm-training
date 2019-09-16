#include <iostream>

using namespace std;

int main() {
	char input1[4];
	char input2[4];
	int reverse1 = 0;
	int reverse2 = 0;
	
	cin >> input1 >> input2;
	for(int i=2; i>=0; i--){
		reverse1 += input1[i] - '0';
		reverse2 += input2[i] - '0';
		if(i>0){
			reverse1 *= 10;
			reverse2 *= 10;
		}
	}

	if(reverse1 > reverse2)
		cout << reverse1 << endl;
	else 
		cout << reverse2 << endl;
}

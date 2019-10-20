#include <iostream>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input[5];
	for(int i=0; i<5; i++)
		cin >> input[i];

	unsigned sum = 0;
	for(int i=0; i<5; i++)
		sum += input[i]*input[i];
	
	cout << sum%10 << endl;
	
}

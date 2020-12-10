#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	int value = N;
	int cnt = 0;
	
	do{
		int a = value / 10;
		int b = value % 10;
		value = b * 10 + (a+b) % 10;
		cnt ++;
	}while(N != value);
	
	cout << cnt << endl;
}

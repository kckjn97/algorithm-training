#include <iostream>

using namespace std;

int main() {
	int A, B, C;
	int cnt[10] = {0};

	cin >> A >> B >> C;
	
	int value = A * B * C;
	while(value > 0){
		int n = value % 10;
		cnt[n]++;
		value /= 10;
	}
	
	for(int i=0; i<10; i++)
		cout << cnt[i] << endl;
}

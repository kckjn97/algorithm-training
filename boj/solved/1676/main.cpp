#include <iostream>

using namespace std;

int main() {
	int N;
	int cnt = 0;
	cin >> N;
	
	long value=1;
	for(int i=1; i<=N;i++){
		value *= i;
		while(value % 10 == 0){
			cnt++;
			value /= 10;
		}
		if(value > 100000000)
			value %= 100000000;
	}
	cout << cnt << endl;
}

#include <iostream>

using namespace std;

int main() {
	int x;
	cin >> x;
	int sum = 0;
	int round;
	for(int i=1; ;i++){
		sum += i;
		if(sum >= x){
			sum -= i;
			round = i+1;
			break;
		}
	}
	for(int i=1; i<=x-sum; i++){
		int a = i;
		int b = round-a;
		if(i==x-sum){
			cout << b << " " << a << endl;
		}
	}
	
}

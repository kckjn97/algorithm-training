#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int sum = 0;
	int cnt = 0;

	for(int i=1; ;i++){
		for(int j=0; j<i; j++){
			cnt++;
			if(cnt >= a)
				sum += i;
			if(cnt >= b){
				cout << sum << endl;
				return 0;
			}
		}
	}
	return 0;
}

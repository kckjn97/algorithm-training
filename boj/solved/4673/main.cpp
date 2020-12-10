#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	char flag[10001] = {0};
	char num[5];
	for(int i=1; i<=10000; i++){
		sprintf(num, "%d", i);
		int sum=i;
		for(int j=0; j<5; j++){
			if(num[j] == 0) break;
			sum += num[j] - '0';
		}
		if(sum > 10001) continue;
		flag[sum] = 1;
		//cout << i << " " << sum << endl;
	}
	for(int i=1; i<=10000; i++){
		if(flag[i] == 0)
			cout << i << endl;
	}
}

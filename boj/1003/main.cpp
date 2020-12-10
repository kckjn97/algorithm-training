#include <iostream>
#include <string.h>

void cnt_fibonacci(int n){
	int* cnt0;
	int* cnt1;
	
	cnt0 = (int*) malloc(sizeof(int) * (n+1));
	cnt1 = (int*) malloc(sizeof(int) * (n+1));
	memset(cnt0, 0x00, sizeof(int) * (n+1));
	memset(cnt1, 0x00, sizeof(int) * (n+1));

	cnt0[0] = 1;
	cnt1[0] = 0;
	cnt0[1] = 0;
	cnt1[1] = 1;
	for(int i=2; i<=n;i++){
		cnt1[i] = cnt1[i-1] + cnt1[i-2];
		cnt0[i] = cnt0[i-1] + cnt0[i-2];
	}

	std::cout << cnt0[n] << " " << cnt1[n] << "\n";
}

int main() {
	int in, num;
	std::cin >> num;
	for(int i=0; i<num; i++){
		std::cin >> in;
		cnt_fibonacci(in);
	}
}

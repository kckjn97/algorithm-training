#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n;
	int sum = 0;
	cin >> n;
	for(int i=1; i<=n; i++)
		sum += i;
	printf("%d\n", sum);
}

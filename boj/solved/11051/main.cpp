#include <iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	long long **c;
	c = (long long**) malloc(sizeof(long long*) * n);
	for(int i=0; i<n; i++){
		c[i] = (long long*) malloc(sizeof(long long) * (i+2));
		if(i==0){
			c[0][0] = 1;
			c[0][1] = 1;
			continue;
		}
		c[i][0] = 1;
		c[i][i+1] = 1;
		for(int j=1; j<i+1; j++){
			c[i][j] = c[i-1][j]+c[i-1][j-1];
			c[i][j] %= 10007;
		}
	}
	cout << c[n-1][k] % 10007<< endl;
}

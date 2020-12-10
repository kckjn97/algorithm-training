#include <iostream>

using namespace std;

long long nCr(int n, int k){
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
	long res = c[n-1][k] % 10007;
	for(int i=0; i<n; i++)
		free(c[i]);
	free(c);
	return res;
}

int main() {
	int n;
	cin >> n;
	
	long long res = 0;
	for(int i=0; i<=n/2; i++){
		res += nCr(n-i, i);
		res %= 10007;
	}
	cout << res << endl;
}

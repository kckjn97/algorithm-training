#include <iostream>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m,n;
	cin >> m >> n;
	
	char bitmap[1000000] = {0};
	bitmap[0] = 1;
	bitmap[1] = 1;

	for(int i=2; i<=(n+1)/2; i++){
		for(int j=2; i*j <= n; j++){
			bitmap[i*j] = 1;
		}
	}

	for(int i=m; i<=n; i++){
		if(!bitmap[i])
			cout << i << "\n";
	}
}

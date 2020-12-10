#include <iostream>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int up, down;
	int n = 0;
	int max = 0;

	while(scanf("%d %d", &down, &up) == 2){
		n+=up;
		n-=down;
		if(n>max)
			max = n;
	}

	cout << max << "\n";
}

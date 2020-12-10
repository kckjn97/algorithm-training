#include <iostream>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, a, b;
	cin >> n >> a >> b;

	a--;
	b--;
	
	int cnt = 0;
	while(n){
		cnt++;
		a >>= 1;
		b >>= 1;
		if(a == b)
			break;
		n >>= 1;
	}

	cout << cnt << endl;
}

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 0;
	for(int i=1; i<=n; i++){
		int tmp;
		cin >> tmp;
		if( i != tmp )
			cnt++;
	}
	cout << cnt << endl;
}

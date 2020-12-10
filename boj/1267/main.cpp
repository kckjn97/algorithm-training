#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	int y=0;
	int m=0;
	cin >> n;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		y += (tmp / 30 + 1) * 10;
		m += (tmp / 60 + 1) * 15;
	}
	if(y < m)
		cout << "Y " << y << endl;
	else if( y == m)
		cout << "Y M " << y << endl;
	else
		cout << "M " << m << endl;
}

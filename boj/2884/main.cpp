#include <iostream>
using namespace std;

int main() {
	int h, m;
	cin >> h >> m;

	if(m >=45){
		cout << h << " " << m-45 << endl;
	}else{
		m = (m-45 + 60) % 60;
		h = (h -1 +24) % 24;
		cout << h << " " << m << endl;
	}
}

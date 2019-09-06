#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int min=1e6, max = -1e6;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		if(tmp > max)
			max = tmp;
		if(tmp < min)
			min = tmp;
	}
	cout << min << " " << max << endl;
}

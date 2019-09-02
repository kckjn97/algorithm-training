#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	float* num = (float*) malloc(sizeof(float) * n);
	
	float max = 0;
	for(int i=0; i<n; i++) {
		cin >> num[i];

		if( num[i] > max )
			max = num[i];
	}

	float sum = 0;
	for(int i=0; i<n; i++) {
		num[i] = num[i] / max * 100;
		sum += num[i];
	}

	cout << sum / n << endl;
}

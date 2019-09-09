#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int tmp;
	int min=1e7;
	int max=0;
	for(int i=0; i<n; i++){
		cin >> tmp;
		if(min > tmp)
			min = tmp;
		if(max < tmp)
			max = tmp;
	}
	cout << min*max << endl;
}

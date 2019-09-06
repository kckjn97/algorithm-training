#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int* arr = (int*) malloc(sizeof(int) * n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	nth_element(arr, arr+k-1, arr+n);
	cout << arr[k-1] << endl;
}

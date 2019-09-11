#include <iostream>

using namespace std;

int main() {
	int n;
	int min_sum[3] = {0};
	int new_sum[3] = {0};
	cin >> n;
	
	int r,g,b;

	for(int i=0; i<n; i++){
		cin >> r >> g >> b;

		if(min_sum[1] > min_sum[2]) new_sum[0] = r + min_sum[2];
		else new_sum[0] = r + min_sum[1];
	
		if(min_sum[2] > min_sum[0]) new_sum[1] = g + min_sum[0];
		else new_sum[1] = g + min_sum[2];
	
		if(min_sum[0] > min_sum[1]) new_sum[2] = b + min_sum[1];
		else new_sum[2] = b + min_sum[0];

		min_sum[0] = new_sum[0];
		min_sum[1] = new_sum[1];
		min_sum[2] = new_sum[2];
		//cout << min_sum[0] << " " << min_sum[1] << " " << min_sum[2] <<endl;
	}
	int min = 0x7fffffff;
	for(int i=0; i<3; i++)
		if(min > min_sum[i]) min = min_sum[i];
	cout << min << endl;
}

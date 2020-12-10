#include <iostream>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int** triangle;
	triangle = new int*[n];
	
	for(int i=0; i<n; i++){
		triangle[i] = new int[i+1];
		for(int j=0; j<i+1; j++){
			cin >> triangle[i][j];
		}
	}

	for(int i=n-1; i>0; i--){
		for(int j=0; j<i; j++){
			triangle[i-1][j] += triangle[i][j] > triangle[i][j+1] ? triangle[i][j] : triangle[i][j+1];
		}
	}
	cout << triangle[0][0] << "\n";
}

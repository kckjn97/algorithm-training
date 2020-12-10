#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int** a = new int*[n];
	for(int i=0; i<n; i++)
		a[i] = new int[m];

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	int k;
	cin >> m >> k;
	int** b = new int*[m];
	for(int i=0; i<m; i++)
		b[i] = new int[k];

	for(int i=0; i<m; i++){
		for(int j=0; j<k; j++){
			cin >> b[i][j];
		}
	}

	int** c = new int*[n];
	for(int i=0; i<n; i++)
		c[i] = new int[k];

	for(int i=0; i<n; i++){
		for(int j=0; j<k; j++){
			c[i][j] = 0;
			for(int l=0; l<m; l++){
				c[i][j] += a[i][l] * b[l][j];
			}
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<k; j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}

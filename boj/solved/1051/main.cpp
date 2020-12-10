#include <iostream>

using namespace std;

int main() {
	int r,c;
	cin >> r >> c;

	char a[50][50];
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++)
			cin >> a[i][j];
	}
	
	int s = r>c? c:r;
	for(int k=s-1; k>=0; k--){
		for(int i=0; i+k<r; i++){
			for(int j=0; j+k<c; j++){
				if(a[i][j] == a[i+k][j] && a[i][j] == a[i][j+k] && a[i][j] == a[i+k][j+k]){
					cout << (k+1)*(k+1) << endl;
					return 0;
				}
			}
		}
	}
}

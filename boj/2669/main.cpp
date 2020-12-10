#include <iostream>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	char bitmap[100][100] = {{0}};
	for(int i=0; i<4; i++){
		int x1,y1, x2,y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for(int x=x1-1; x<x2-1; x++){
			for(int y=y1-1; y<y2-1; y++){
				bitmap[x][y] = 1;
			}
		}
	}
	int res = 0;
	for(int i=0; i<100; i++){
		for(int j=0; j<100; j++){
			if(bitmap[i][j])
				res++;
		}
	}
	cout << res << "\n";
}

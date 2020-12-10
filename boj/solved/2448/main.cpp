#include <iostream>
#include <cstring>

using namespace std;

void check(uint8_t** map, int k, int x, int y){
	if(k==3){
		map[x][y+2] = 1;
		map[x+1][y+1] = map[x+1][y+3] = 1;
		map[x+2][y] = map[x+2][y+1] = map[x+2][y+2] = map[x+2][y+3] = map[x+2][y+4] = 1;
		return;
	}else{
		k = k/2;
		check(map, k, x, y+k);
		check(map, k, x+k, y);
		check(map, k, x+k, y+k*2);
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k;
	cin >> k;

	uint8_t **map = (uint8_t**) malloc(sizeof(uint8_t*) * k);
	for(int i=0; i<k; i++){
		map[i] = (uint8_t*) malloc(sizeof(uint8_t) *(k * 2 - 1));
		memset(map[i], 0x00, sizeof(uint8_t) * k);
	}
	
	check(map, k, 0, 0);
	for(int i=0; i<k; i++){
		for(int j=0; j<(k*2-1); j++){
			if(map[i][j] == 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

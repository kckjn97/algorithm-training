#include <iostream>
#include <cstring>

using namespace std;

void draw(uint8_t** map, int k, int x, int y){
	int sizeX = (0x01 << k) - 1;
	int sizeY = sizeX * 2 - 1;
	if(k==1){
		map[x][y] = '*';
		return;
	}
	if(k % 2){
		for(int i=0; i<sizeX; i++)
			map[x+sizeX-1 - i][y+i] = '*';
		for(int i=0; i<sizeX; i++)
			map[x+i][y+sizeX-1+i] = '*';
		for(int i=0; i<sizeY; i++)
			map[x+sizeX-1][y+i] = '*';
		draw(map, k-1, x+(sizeX-1)/2, y+(0x01<<(k-1)));
	}else{
		for(int i=0; i<sizeX; i++)
			map[x+i][y+i] = '*';
		for(int i=0; i<sizeX; i++)
			map[x+i][y+sizeY-1-i] = '*';
		for(int i=0; i<sizeY; i++)
			map[x][y+i] = '*';
		draw(map, k-1, x+1, y+(0x01 << (k-1)) );
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k;
	cin >> k;
	int sizeX, sizeY;
	sizeX = (0x01 << k) - 1;
	sizeY = sizeX * 2 - 1;

	uint8_t **map = (uint8_t**) malloc(sizeof(uint8_t*) * sizeX);
	for(int i=0; i<sizeX; i++){
		map[i] = (uint8_t*) malloc(sizeof(uint8_t) * sizeY);
		memset(map[i], ' ', sizeof(uint8_t) * sizeY);
	}

	draw(map, k, 0, 0);

	for(int i=0; i<sizeX; i++){
		for(int j=sizeY-1; j>=0; j--){
			if(map[i][j] == ' ')
				map[i][j] = 0;
			else
				break;
		}
	}

	for(int i=0; i<sizeX; i++){
		for(int j=0; j<sizeY; j++){
			if(map[i][j])
				cout << map[i][j];
		}
		cout << endl;
	}
}

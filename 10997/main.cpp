#include <iostream>
#include <cstring>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int sizeX = (n==1)? 1:n*4-1;
	int sizeY = n*4-3;

	char** board;
	board = (char**) malloc(sizeof(char*) * sizeX);
	for(int i=0; i<sizeX; i++){
		board[i] = (char*) malloc(sizeof(char) * sizeY);
		memset(board[i], ' ', sizeof(char) * sizeY);
	}
	
	int x=(n==1? 0:n*2);
	int y=(n-1)*2;
	
	int dir = 0; 
	int a = 0;

	board[x][y] = '*';
	while(1){
		if(dir == 0){
			a+=2;
			if(x == 0)
				break;
			for(int i=0; i<a; i++){
				x--;
				board[x][y] = '*';
			}
		}else if(dir == 1){
			for(int i=0; i<a; i++){
				y++;
				board[x][y] = '*';
				if(y==sizeY-1 && x==0)
					break;
			}
			if(y==sizeY-1 && x==0)
				break;
		}else if(dir == 2){
			a+=2;
			for(int i=0; i<a; i++){
				x++;
				board[x][y] = '*';
			}
		}else if(dir == 3){
			for(int i=0; i<a; i++){
				y--;
				board[x][y] = '*';
			}
		}
		dir = (dir+1)%4;
	}
	for(int i=0; i<sizeX; i++){
		for(int j=0; j<sizeY; j++){
			if(i==1 && j>0)
				break;
			cout << board[i][j];
		}
		cout << endl;
	}
}

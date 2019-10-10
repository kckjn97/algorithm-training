#include <iostream>
#include <cstring>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int size = n*4-3;
	char** board = (char**) malloc(sizeof(char*) * size);
	for(int i=0; i<size; i++){
		board[i] = (char*) malloc(sizeof(char) * size);
		memset(board[i], ' ', sizeof(char) * size);
	}
	int x = 2*(n-1);
	int y = 2*(n-1);
	int a=-2;

	for(int i=0; i<n; i++){
		a+=2;
		for(int j=0; j<=a; j++)
			board[x-a][y-j] = '*';
		for(int j=0; j<=a; j++)
			board[x-a][y+j] = '*';
		for(int j=0; j<=a; j++)
			board[x-j][y-a] = '*';
		for(int j=0; j<=a; j++)
			board[x-j][y+a] = '*';
		for(int j=0; j<=a; j++)
			board[x+a][y-j] = '*';
		for(int j=0; j<=a; j++)
			board[x+a][y+j] = '*';
		for(int j=0; j<=a; j++)
			board[x+j][y-a] = '*';
		for(int j=0; j<=a; j++)
			board[x+j][y+a] = '*';
	}
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++)
			cout << board[i][j];
		cout << endl;
	}
}

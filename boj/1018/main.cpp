#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	string* board = new string[n];
	
	for(int i=0; i<n; i++)
		cin >> board[i];
	
	int min = 64;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			bool w;
			int cnt = 0;
			int a;
			int b;
			for(a=0; a<8 && (i+a)<n; a++){
				w = a%2;
				for(b=0; b<8 && (j+b)<m; b++){
					if(w == true){
						if(board[a+i][b+j] == 'B'){
							cnt++;
						}
					}else{
						if(board[a+i][b+j]== 'W'){
							cnt++;
						}
					}
					w = !w;
				}
			}

			if(a == 8 && b == 8){
				if(cnt > 32) cnt = 64-cnt;
				if(min > cnt)  min = cnt;
			}
		}
	}
	cout << min << endl;
}

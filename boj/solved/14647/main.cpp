#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int** board = (int**) malloc(sizeof(int*)*n);
	for(int i=0; i<n; i++)
		board[i] = (int*) malloc(sizeof(int)*m);

	int cnt_9 = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> board[i][j];
			int tmp = board[i][j];
			for(int i=0; i<4; i++){
				if(tmp%10 == 9){
					cnt_9++;
				}
				tmp /= 10;
			}
		}
	}
	
	int max_cnt = 0;

	for(int i=0; i<n; i++){
		int cnt = 0;
		for(int j=0; j<m; j++){
			int tmp = board[i][j];
			for(int i=0; i<4; i++){
				if(tmp%10 == 9){
					cnt++;
				}
				tmp /= 10;
			}
		}
		if(cnt > max_cnt)
			max_cnt = cnt;
	}
	for(int i=0; i<m; i++){
		int cnt = 0;
		for(int j=0; j<n; j++){
			int tmp = board[j][i];
			for(int i=0; i<4; i++){
				if(tmp%10 == 9){
					cnt++;
				}
				tmp /= 10;
			}
		}
		if(cnt > max_cnt)
			max_cnt = cnt;
	}
	
	cout << cnt_9-max_cnt << endl;
}

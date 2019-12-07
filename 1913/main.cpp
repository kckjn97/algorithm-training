#include <iostream>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;

	cin >> n >> k;

	int** arr = new int*[n];
	for(int i=0; i<n; i++)
		arr[i] = new int[n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			arr[i][j] = -1;
		}	
	}
	int start = n/2;
	int x = start;
	int y = start;
	int dir = 0;
	int res_x=0, res_y=0;

	arr[x][y] = 1;
	for(int cursor = 2; cursor <= n*n; cursor++){
		if(dir == 0){
			y-=1;
			if(cursor > 1 && arr[x+1][y] == -1)
				dir = 1;
		}else if(dir == 1){
			x+=1;
			if(arr[x][y+1] == -1)
				dir = 2;
		}else if(dir == 2){
			y+=1;
			if(arr[x-1][y] == -1)
				dir = 3;
		}else if(dir == 3){
			x-=1;
			if(arr[x][y-1] == -1)
				dir = 0;
		}
		arr[x][y] = cursor;
		if(cursor == k){
			res_x = x+1;
			res_y = y+1;
		}
	}

	for(int j=0; j<n; j++){
		for(int i=0; i<n; i++){
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	cout << res_y << " " << res_x << "\n";
	
}

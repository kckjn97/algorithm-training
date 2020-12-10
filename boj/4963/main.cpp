#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int w, h;
	cin >> w >> h;
	while(w !=0 && h != 0){
		int** array = new int*[h];
		for(int i=0; i<h; i++)
			array[i] = new int[w];
		int cnt = 0;
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				cin >> array[i][j];
				if(array[i][j]){
					cnt++;
					array[i][j] = cnt;
				}
			}
		}
		
		int changed = 0;
		do{
			changed = 0;

			for(int i=0; i<h; i++){
				for(int j=0; j<w; j++){
					if(array[i][j]){
						if(j+1 < w){
							if(array[i][j+1]){
								if(array[i][j] > array[i][j+1] ){
									array[i][j+1] = array[i][j];
									changed = 1;
								}
							}
						}
						if(j-1 >= 0){
							if(array[i][j-1]){
								if(array[i][j] > array[i][j-1] ){
									array[i][j-1] = array[i][j];
									changed = 1;
								}
							}
						}
						if(i+1 < h){
							if(array[i+1][j]){
								if(array[i][j] > array[i+1][j] ){
									array[i+1][j] = array[i][j];
									changed = 1;
								}
							}
						}
						if(i-1 >= 0){
							if(array[i-1][j]){
								if(array[i][j] > array[i-1][j] ){
									array[i-1][j] = array[i][j];
									changed = 1;
								}
							}
						}
						if(j+1 < w && i-1 >=0){
							if(array[i-1][j+1]){
								if(array[i][j] > array[i-1][j+1] ){
									array[i-1][j+1] = array[i][j];
									changed = 1;
								}
							}
						}

						if(j-1 >= 0 && i+1 < h){
							if(array[i+1][j-1]){
								if(array[i][j] > array[i+1][j-1] ){
									array[i+1][j-1] = array[i][j];
									changed = 1;
								}
							}
						}
						if(j+1 < w && i+1 < h){
							if(array[i+1][j+1]){
								if(array[i][j] > array[i+1][j+1] ){
									array[i+1][j+1] = array[i][j];
									changed = 1;
								}
							}
						}
						if(j-1 >=0 && i-1 >= 0){
							if(array[i-1][j-1]){
								if(array[i][j] > array[i-1][j-1] ){
									array[i-1][j-1] = array[i][j];
									changed = 1;
								}
							}
						}
					}
				}
			}
		}while(changed);
		
		set<int> s;
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				if(array[i][j])
					s.insert(array[i][j]);
			}
		}

		cout << s.size() << '\n';
		cin >> w >> h;
	}
}


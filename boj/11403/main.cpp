#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int g[100][100];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> g[i][j];
		}
	}
	
	bool changed = true;
	while(changed == true){
		changed = false;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				for(int k=0; k<n; k++){
					if(g[i][j] == 1 && g[j][k] == 1){
						if(g[i][k] == 0){
							changed = true;
							g[i][k] = 1;
						}

					}
				}
			}
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			printf("%d ", g[i][j]);
		}
		printf("%d", g[i][n-1]);
		printf("\n");
	}
}

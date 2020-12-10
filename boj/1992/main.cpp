#include <iostream>

using namespace std;

void count(char** array, int size, int x, int y){
	if(size == 1){
		printf("%c", array[y][x]);
	}else{
		char value0 = array[y][x];
		int cnt=0;

		for(int i=0; i<size; i++){
			for(int j=0; j<size; j++){
				if(array[y+i][x+j] == value0)
					cnt++;
				else{
					i=size; j=size;
					break;
				}
			}
		}

		if(cnt == size*size){
			printf("%c", value0);
		}else{
			printf("(");
			count(array, size/2, x, y);
			count(array, size/2, x+size/2, y);
			count(array, size/2, x, y+size/2);
			count(array, size/2, x+size/2, y+size/2);
			printf(")");
		}
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	char** array = new char*[n+1];

	for(int i=0; i<n; i++)
		array[i] = new char[n+1];

	for(int i=0; i<n; i++)
		cin >> array[i];
	//	fgets(array[i], 1024, stdin);
	
	count(array, n, 0, 0);
	printf("\n");
}

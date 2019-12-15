#include <iostream>

using namespace std;

int a = 0 , b = 0, c = 0;

void count(int** array, int size, int x, int y){
	//cout << size << "\n";
	if(size == 1){
		for(int i=0; i<size; i++){
			for(int j=0; j<size; j++){
				//cout << x << " " << y << " " << size << "\n";
				if(array[x+i][y+j] == -1)
					a++;
				else if(array[x+i][y+j] == 0)
					b++;
				else if(array[x+i][y+j] == 1)
					c++;
			}
		}
	}else{
		int value0 = array[x][y];
		int cnt=0;
		for(int i=0; i<size; i++){
			for(int j=0; j<size; j++){
				if(array[x+i][y+j] == value0)
					cnt++;
				else{
					i=size; j=size;
					break;
				}
			}
		}
		if(cnt == size*size){
			//cout << x << " " << y << " " << size << "\n";
			if(value0 == -1)
				a ++;
			else if(value0 == 0)
				b++;
			else if(value0 == 1)
				c++;
		}else{
			count(array, size/3, x, y);
			count(array, size/3, x+size/3, y);
			count(array, size/3, x+2*size/3, y);

			count(array, size/3, x, y+size/3);
			count(array, size/3, x+size/3, y+size/3);
			count(array, size/3, x+2*size/3, y+size/3);

			count(array, size/3, x, y+2*size/3);
			count(array, size/3, x+size/3, y+2*size/3);
			count(array, size/3, x+2*size/3, y+2*size/3);
		}
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	int** array = new int*[n];

	for(int i=0; i<n; i++)
		array[i] = new int[n];

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int tmp;
			cin >> tmp;
			array[j][i] = tmp;
		}
	}
	
	count(array, n, 0, 0);

	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";
}

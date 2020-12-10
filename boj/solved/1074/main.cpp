#include <iostream>

using namespace std;

int start = 0;
void Z(int size, int x, int y, int r, int c){
	if(size == 1){
		if(x == r && y == c){
			cout << start << endl;
			exit(0);
		}else if(x == r && y+1 == c){
			cout << start + 1 << endl;
			exit(0);
		}else if(x+1 == r && y == c){
			cout << start + 2 << endl;
			exit(0);
		}else if(x+1 == r && y+1 == c){
			cout << start + 3 << endl;
			exit(0);
		}
		start+=4;
	}else{
		Z(size-1, x, y, r, c);
		Z(size-1, x, y+(0x1<<(size-1)), r, c);
		Z(size-1, x+(0x01<<(size-1)), y, r, c);
		Z(size-1, x+(0x01<<(size-1)), y+(0x1<<(size-1)), r, c);
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, r, c;
	cin >> n >> r >> c;
	Z(n, 0, 0, r, c);
}

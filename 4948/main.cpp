#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int n;
	char* flag;
	cin >> n;
	while(n != 0){
		flag = (char*) malloc(n*2+1);
		memset(flag, 0x00, n*2+1);
		for(int i=n; i>1; i--){
			for(int j=n/i; ;j++){
				if(i*j <= n)
					continue;
				if(i*j > 2*n)
					break;
				//cout << i << " " << j << endl;
				flag[i*j] = 1;
			}
		}

		int cnt = 0;
		for(int i=n+1; i<=2*n; i++){
			if(flag[i] == 0){
				//cout << i << endl;
				cnt++;
			}
		}
		cout << cnt << endl;
		free(flag);
		cin >> n;
	}
}

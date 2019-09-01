#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int num;
	char str[101];
	int check['z'-'a'];
	cin >> num;
	int res=0;
	char cursor;
	for(int i=0; i<num; i++){
		memset(check, 0x00, sizeof(char)*101);
		cin >> str;
		cursor = str[0];
		check[cursor-'a'] = 1;

		for(int j=1; j<101;j++){
			if(str[j] == 0){
				res++;
				break;
			}
			
			if(cursor != str[j]){
				if(check[str[j] -'a'] == 1)
					break;
				check[str[j] - 'a'] = 1;
				cursor = str[j];
			}
		}
	}
	cout << res << endl;
}

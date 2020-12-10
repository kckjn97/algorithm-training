#include <iostream>

using namespace std;

int main() {
	char str[1000001] = {0};
	char res[1000001] = {0};
	cin >> str;
	char c=0;
	int len = 0;
	for(int i=0; i<1000001; i++){
		if(str[i] == 0){
			len = i;
			break;
		}
	}

	int cnt = 0;
	for(int i=0; i<len; i++){
		if(i%3==0){
			c = 0;
			c += str[len-1-i] - '0';
		}else if(i%3==1){
			c += (str[len-1-i] - '0') * 2;
		}else if(i%3==2){
			c += (str[len-1-i] - '0') * 4;
		}
		if(i == len-1 || i%3==2){
			c += '0';
			res[cnt++] = c;
		}
	}
	for(int i=0; i<cnt; i++)
		printf("%c", res[cnt-i-1]);
	printf("\n");

}

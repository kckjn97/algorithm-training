#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char str[501];
	fgets(str, 500, stdin);
	while(strcmp(str, "END\n") != 0){
		int len = strlen(str);
		for(int i=len-1; i>=0; i--){
			if(str[i] == '\n')
				continue;
			printf("%c", str[i]);
		}
		printf("\n");
		fgets(str, 500, stdin);
	}
}

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	char str[1000000];
	int cnt = 0;
	char prior = ' ';
	
	fgets(str, sizeof(str), stdin);

	if(str[0] == 0)
		cnt = -1;

	for(int i=0; i<1000000; i++){
		if(str[i] == 0)
			break;

		if(prior == ' ' && str[i] != ' ' && str[i] != '\r'  && str[i] != '\n')
			cnt++;
		
		prior = str[i];
	}
	cout << cnt << endl;
}

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	char s[101];
	
	fgets(s, 101, stdin);

	for(int i=0; i<101; i++){
		if(s[i] == 0)
			break;
		else if(s[i] >= 'A' && s[i] <='Z')
			s[i] = (s[i] - 'A' + 13) % ('Z' - 'A' + 1) +'A';
		else if(s[i] >= 'a' && s[i] <='z')
			s[i] = (s[i] - 'a' + 13) % ('z' - 'a' + 1) +'a';
	}
	cout << s;
}

#include <iostream>

using namespace std;

int main() {
	char str[101];
	while(fgets(str, 100, stdin))
		cout << str;
}

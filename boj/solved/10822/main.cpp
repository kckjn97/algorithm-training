#include <iostream>
#include <cstring>

using namespace std;

int main() {
	string str;
	cin >> str;
	char* cstr = (char*) str.c_str();
	char *token = strtok(cstr, ",");
	int sum = 0;
	while(token != NULL){
		sum += atoi(token);
		token = strtok(NULL, ",");
	}
	cout << sum << endl;
}

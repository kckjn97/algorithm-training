#include <iostream>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;
	float output;
	if(str[0] == 'A')
		output = 4;
	else if(str[0] == 'B')
		output = 3;
	else if(str[0] == 'C')
		output = 2;
	else if(str[0] == 'D')
		output = 1;
	else
		output = 0;

	if(output > 0){
		if(str[1] == '+')
			output += 0.3;
		else if(str[1] == '-')
			output -= 0.3;
	}

	cout << fixed;
	cout.precision(1);
	cout << output << endl;
}

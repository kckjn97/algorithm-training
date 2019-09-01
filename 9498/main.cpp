#include <iostream>

using namespace std;

int main() {
	int score;
	char res;
	cin >> score;
	if(score >= 90 && score <= 100)
		res = 'A';
	else if(score >=80 && score <= 89)
		res = 'B';
	else if(score >=70 && score <= 79)
		res = 'C';
	else if(score >=60 && score <= 69)
		res = 'D';
	else
		res = 'F';
	
	cout << res << endl;
}

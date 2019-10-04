#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;
	int f;
	cin >> f;
	int n = stoi(str);
	n = (n / 100)*100;
	if(n%f != 0)
		n += (f - n % f);
	int res = n%100;
	if(res < 10)
		cout << 0;
	cout << res << endl;
}

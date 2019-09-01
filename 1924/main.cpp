#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	
	int d = 0;
	for(int i=1; i< x; i++){
		int m;
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
			m = 31;
		else if(i == 2)
			m = 28;
		else
			m=30;

		d += m;
	}
	d += y;
	d %= 7;
	string res;
	if( d == 0)
		res = "SUN";
	else if( d == 1)
		res = "MON";
	else if( d == 2)
		res = "TUE";
	else if( d == 3)
		res = "WED";
	else if( d == 4)
		res = "THU";
	else if( d == 5)
		res = "FRI";
	else if( d == 6)
		res = "SAT";
	cout << res << endl;
	
}

#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int res;

	if(b >= c){
		res = -1;
	}else{
		res =  a / (c-b);
		while(res <= a / (c-b))
			res++;
	}
	cout << res << endl;
}

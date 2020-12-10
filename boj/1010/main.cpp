#include <iostream>

using namespace std;

unsigned long long C(unsigned long long a, unsigned long long b){
	unsigned long long res=1;
	if(a==0 || b==0)
		return 0;
	for(int i=0; i<b; i++){
		res *= (a-i);
		res /= (i+1);
	}
	return res;
}

int main() {
	int T;
	cin >> T;
	for(int test_case=0; test_case<T; test_case++){
		int n, m;
		cin >> n >> m;
		cout << C(m, n) << endl;
	}
}

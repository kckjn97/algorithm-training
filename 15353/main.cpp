#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string a, b, res;
	cin >> a >> b;
	
	if(a.size() > b.size()){
		res = a;
		a = b;
	} else{
		res = b;
	}

	reverse(res.begin(), res.end());
	reverse(a.begin(), a.end());
	
	int carry = 0;
	for(int i=0; i<a.size(); i++){
		int tmp = res[i] - '0' + a[i] - '0' + carry;
		carry = tmp / 10;
		res[i] = tmp % 10 + '0';
	}
	for(int i=a.size(); i<res.size(); i++){
		int tmp = res[i] - '0' + carry;
		carry = tmp / 10;
		res[i] = tmp % 10 + '0';
	}

	if(carry > 0){
		res+=carry+'0';
	}
	
	reverse(res.begin(), res.end());
	cout << res << endl;
}

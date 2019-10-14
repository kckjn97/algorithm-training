#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string a, b, res;
	cin >> a >> b;
	
	int signA = 0, signB = 0;
	if(a[0] == '-')
		signA = 1;
	if(b[0] == '-')
		signB= 1;

	int oper = 0;
	if(signA != signB){
		oper = 1;
	}
	if(signA)
		a.erase(0,1);
	if(signB)
		b.erase(0,1);

	while(a.size() > 1 && a[0] == '0'){
		a.erase(0, 1);
	}
	while(b.size() > 1 && b[0] == '0'){
		b.erase(0, 1);
	}
	int res_sign = 0;
	if(a.size() == b.size()){
		int r = a.compare(b);
		if(r < 0){
			res = b;
			if(oper == 1 && signB==1)
				res_sign = 1;
		}else{
			res = a;
			a = b;
			if(oper == 1 && signA==1)
				res_sign = 1;
		}
	}else if(a.size() > b.size()){
		res = a;
		a = b;
		if(oper == 1 && signA==1)
			res_sign = 1;
	} else{
		res = b;
		if(oper == 1 && signB==1)
			res_sign = 1;
	}
	if(signA == 1 && signB == 1)
		res_sign = 1;

	reverse(res.begin(), res.end());
	reverse(a.begin(), a.end());
	
	if(oper == 0){
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
	}else{
		int carry = 0;
		for(int i=0; i<a.size(); i++){
			int tmp = (res[i] - '0') - (a[i] - '0') - carry;
			if(tmp < 0){
				tmp = 10+tmp;
				carry = 1;
			}
			else
				carry = 0;
			res[i] = tmp + '0';
		}
		for(int i=a.size(); i<res.size(); i++){
			int tmp = res[i] - '0' - carry;
			if(tmp < 0){
				tmp = 10+tmp;
				carry = 1;
			}else
				carry = 0;
			res[i] = tmp + '0';
		}
	}
	
	reverse(res.begin(), res.end());
	while(res.size() > 1 && res[0] == '0'){
		res.erase(0, 1);
	}
	if(res != "0")
		if(res_sign == 1)
			res = '-' + res;		
	cout << res << endl;
}

#include <iostream>
#include <algorithm>

using namespace std;

string sum(string a, string b){
	string rev;
	string rev_a = a;
	reverse(rev_a.begin(), rev_a.end());
	string rev_b = b;
	reverse(rev_b.begin(), rev_b.end());
	
	if(rev_a.size() > rev_b.size()){
		rev = rev_a;
	}else {
		rev = rev_b;
		rev_b = rev_a;
	}

	int add=0;
	for(int i=0; i<rev_b.size(); i++){
		int tmp = rev[i]-'0' + rev_b[i]-'0' + add;
		add = tmp / 10;
		rev[i] = tmp % 10 + '0';
	}

	for(int i=rev_b.size(); i<rev.size(); i++){
		int tmp = rev[i]-'0' + add;
		add = tmp / 10;
		rev[i] = tmp % 10 + '0';
	}

	if(add > 0)
		rev += add+'0';

	reverse(rev.begin(), rev.end());
	return rev;
}

int main() {
	int n;
	cin >> n;

	string a[2]={"0","1"};
	
	for(int i=2; i<=n; i++){
		a[i%2]=sum(a[0], a[1]);
	}
	cout << a[n%2] << endl;

}

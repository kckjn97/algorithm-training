#include <iostream>
#include <vector>

using namespace std;

int main() {
	string str1, str2;
	string rev1, rev2;
	string rev_sum = "";
	cin >> str1 >> str2;

	for(int i=0; i<str1.size(); i++)
		rev1 += str1[str1.size() - 1 - i];
	for(int i=0; i<str2.size(); i++)
		rev2 += str2[str2.size() - 1 - i];
	
	int max = str1.size() > str2.size() ? str1.size() : str2.size();
	
	int add = 0;
	for(int i=0; i<max+1; i++){
		int tmp1, tmp2;
		if(i >= rev1.size())
			tmp1 = 0;
		else
			tmp1 = rev1[i] - '0';
		if(i >= rev2.size())
			tmp2 = 0;
		else
			tmp2 = rev2[i] - '0';

		int tmp = tmp1 + tmp2 + add;

		if(tmp == 0){
			rev_sum += '0';
			add = 0;
		}else if(tmp == 1){
			rev_sum += '1';
			add = 0;
		}else if(tmp == 2){
			rev_sum += '0';
			add = 1;
		}else if(tmp == 3){
			rev_sum += '1';
			add = 1;
		}else
			cout << "error" << endl;
	}

	bool start = false;
	for(int i=rev_sum.size()-1; i>=0; i--){
		if(rev_sum[i] == '1')
			start = true;
		if(start || i==0)
			cout << rev_sum[i];
	}
	cout << endl;
	
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T;
	cin >> T;
	vector<long> vec;
	vector<long> res;
	int max=0;
	for(int test_case=0; test_case<T; test_case++){
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
		if(tmp>max)
			max = tmp;
	}
	long a0=1,b0=1,c0=1;
	res.push_back(a0);
	res.push_back(b0);
	res.push_back(c0);

	long a1,b1,c1;
	for(int i=0; i<max; i+=3){
		a1=a0+b0;
		b1=b0+c0;
		c1=b1+a0;

		res.push_back(a1);
		res.push_back(b1);
		res.push_back(c1);

		a0=a1;
		b0=b1;
		c0=c1;
	}

	for(int i=0; i<vec.size(); i++)
		cout << res[vec[i]-1] << endl;
}

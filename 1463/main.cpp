#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> vec;
	int n;
	cin >> n;
	vec.push_back(n);
	if(n == 1){
		cout << 0 << endl;
		return 0;
	}
	int cnt = 0;
	while(true){
		cnt++;
		vector<int> next;
		for(int i=0; i<vec.size(); i++){
			int a=0, b=0, c=0;

			if(vec[i] % 3 == 0)
				a = vec[i] / 3;
			if(vec[i] % 2 == 0)
				b = vec[i] / 2;
			c = vec[i] - 1;
			if(a==1 || b==1 || c==1){
				cout << cnt << endl;
				return 0;
			}

			if(a)
				next.push_back(a);

			if(b)
				next.push_back(b);

			next.push_back(c);
		}

		vec = next;
	}
}

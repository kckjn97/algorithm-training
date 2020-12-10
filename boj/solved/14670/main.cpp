#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
	int n, r;
	map<int, int> m;
	
	cin >> n;
	for(int i=0; i<n; i++){
		int a, b;
		cin >> a >> b;
		m[a] = b;
	}

	cin >> r;
	for(int i=0; i<r; i++){
		int a;
		vector<int> vec;

		cin >> a;
		bool died = false;

		for(int j=0; j<a; j++){
			int tmp;
			cin >> tmp;
			if(m.find(tmp) == m.end()){
				died = true;
			}else{
				vec.push_back(m[tmp]);
			}
		}

		if(died){
			cout << "YOU DIED" << endl;
			continue;
		}

		for(int j=0; j<vec.size(); j++){


			if(j == vec.size() - 1)
				cout << vec[j];
			else
				cout << vec[j] << " ";
		}
		cout << endl;
	}
}

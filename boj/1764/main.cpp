#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<string> a, b, c;	
	int n, m;
	cin >> n >> m;
	for(int i=0; i<n; i++){
		string str;
		cin >> str;
		a.push_back(str);
	}
	for(int j=0; j<m; j++){
		string str;
		cin >> str;
		b.push_back(str);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	c.resize(a.size() + b.size());
	auto it = set_intersection(a.begin(), a.end(), b.begin(), b.end(), c.begin());
	c.erase(it, c.end());
	sort(c.begin(), c.end());
	cout << c.size() << endl;
	for_each(c.begin(), c.end(), [](string s){ cout << s << endl;});
}

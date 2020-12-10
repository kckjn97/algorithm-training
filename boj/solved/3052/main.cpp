#include <iostream>
#include <set>

using namespace std;

int main() {
	int a, b;
	set<int> s;
	int tmp;
	while(cin >> tmp){
		s.insert(tmp%42);
	}
	cout << s.size() << endl;
}

#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	set<int> s;
	
	cin >> n;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		s.insert(tmp);
	}

	cin >> m;
	for(int i=0; i<m; i++){
		int tmp;
		cin >> tmp;
		auto it = s.find(tmp);
		if(it == s.end())
			cout << 0 << '\n';
		else
			cout << 1 << '\n';
	}
}

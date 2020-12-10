#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a, b;
	int t;
	for(int i=0; i<n; i++){
		cin >> t;
		a.push_back(t);
	}
	for(int i=0; i<n; i++){
		cin >> t;
		b.push_back(t);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<int>());

	int res = 0;
	for(int i=0; i<n; i++)
		res += a[i]*b[i];
	
	cout << res << endl;
}

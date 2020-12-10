#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >>str;
	
	vector<string> vec;

	for(int i=0; i<str.size(); i++)
		vec.push_back(str.substr(i,str.size()-i));

	sort(vec.begin(), vec.end());

	for(int i=0; i<vec.size(); i++)
		cout << vec[i] << "\n";
}

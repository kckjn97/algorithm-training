#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

bool compare(string a, string b){
	if(a.size() < b.size())
		return true;
	if(a.size() > b.size())
		return false;
	return strcmp(a.c_str(), b.c_str()) < 0;
}

int main() {
	int N;
	cin >> N;

	string* strs = new string[N];
	for(int i=0; i<N; i++)
		cin >> strs[i];
	sort(strs, strs+N, compare);

	string prior = "";
	for(int i=0; i<N; i++){
		if(prior != strs[i])
			cout << strs[i] << endl;
		prior = strs[i];
	}
}

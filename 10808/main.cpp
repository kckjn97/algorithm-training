#include <iostream>

using namespace std;

int main() {
	int cnt['z'-'a'+1] = {0};
	string str;
	cin >> str;
	for(int i=0; i<str.size(); i++)
		cnt[str.at(i) - 'a']++;
	for(int i=0; i<'z'-'a'+1; i++)
		cout << cnt[i] << " ";
	cout << endl;
}

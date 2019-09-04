#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;

	int cnt['z'-'a' + 1] = {0};
	
	for(int i=0; i<str.size(); i++){
		const char c = str.at(i);
		if( 'A' <= c && c <= 'Z')
			cnt[c-'A']++;
		else if( 'a' <= c && c <= 'z')
			cnt[c-'a']++;
	}

	int max = 0;
	char res;

	for(int i=0; i<'z'-'a'+1; i++){
		if(cnt[i] > max){
			res = i+'A';
			max = cnt[i];
		}
		else if(cnt[i] == max)
			res = '?';
	}

	cout << res << endl;
}

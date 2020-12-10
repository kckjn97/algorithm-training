#include <iostream>

using namespace std;

int main() {
	int cnt['z'-'a'+1] = {0};
	string str;
	while(cin>>str){
		for(int i=0; i<str.size(); i++){
			if(str.at(i) >= 'a' && str.at(i) <='z')
				cnt[str.at(i)-'a']++;
		}
	}
	int max=0;
	for(int i=0; i<'z'-'a'+1; i++){
		if(cnt[i]>max)
			max = cnt[i];
	}
	for(int i=0; i<'z'-'a'+1; i++){
		if(cnt[i]==max)
			cout << (char)(i+'a');
	}
	cout << endl;
}

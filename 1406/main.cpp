#include <iostream>
#include <list>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	list<char> l;
	string str;
	cin >> str;
	for(int i=0; i<str.size(); i++)
		l.push_back(str[i]);
	auto cursor = l.end();
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		char cmd;
		cin >> cmd;
		if(cmd == 'P'){
			char c;
			cin >> c;
			l.insert(cursor, c);
		}else if(cmd == 'L'){
			if(cursor != l.begin())
				cursor--;
		}else if(cmd == 'B'){
			if(cursor != l.begin()){
				cursor--;
				cursor = l.erase(cursor);
			}
		}else if(cmd == 'D'){
			if(cursor != l.end())
				cursor++;
		}
	}
	auto c = l.begin();
	for(int i=0; i<l.size(); i++){
		cout << *c ;
		c++;
	}
	cout << endl;
}

#include <iostream>
#include <map>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	map<string, int> s2i;
	map<int, string> i2s;
	for(int i=0; i<n; i++){
		char str[21];
		scanf("%s", str);
		s2i[string(str)] = i+1;
		i2s[i+1] = str;
	}

	for(int i=0; i<m; i++){
		char str[21];
		scanf("%s", str);
		if(atoi(str) == 0)
			printf("%d\n", s2i[str]);
		else
			printf("%s\n", i2s[stoi(str)].c_str());
	}
}

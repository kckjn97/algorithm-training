#include <iostream>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

#if 1
	int cnt[10] = {0};

	for(int i=0; i<n; i++){
		string str = to_string(i+1);
		for(int i=0; i<str.size(); i++)
			cnt[str[i]-'0']++;
	}

	cout << cnt[0];
	for(int i=1; i<10; i++)
		cout << " " << cnt[i];
	cout << endl;
#else

#endif
}

#include <iostream>

using namespace std;

int main() {
	string n;
	cin >> n;
	
	int cnt[9] = {0};
	for(int i=0; i<n.size(); i++){
		int tmp = n[i]-'0';
		if(tmp == 9) tmp = 6;
		cnt[tmp]++;
	}
	cnt[6] = (cnt[6]+1) >> 1;
	int max = 0;
	for(int i=0; i<9; i++){
		if( cnt[i] > max )
			max=cnt[i];
	}
	cout << max << endl;
}

#include <iostream>

using namespace std;

int main() {
	int cnt[10] = {0};
	char N[100];

	cin >> N;
	
	for(int i=0; i<100; i++){
		if(N[i] == 0)
			break;
		cnt[N[i] - '0']++;
	}

	for(int i=9; i>=0; i--){
		for(int j=0; j<cnt[i]; j++){
			cout<<i;
		}
	}
	cout << endl;
}

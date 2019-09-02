#include <iostream>
#include <string>

using namespace std;

int main() {

	int N;
	cin >> N;

	int diff = -10;
	int same_diff;
	int cnt = 0;
	char prev;
	
	for(int k=1; k<=N; k++){
		string str = to_string(k);
		const char* n = str.c_str();
		
		same_diff = 1;
		diff = -10;
		prev = n[0];
		for(int i=1; i<5 && n[i]!=0; i++) {
			if(n[i] - prev != diff && diff != -10){
				same_diff = 0;
				break;
			}
			diff = n[i] - prev;
			prev = n[i];
		}

		if(same_diff)
			cnt++;
	}

	cout << cnt << endl;
}

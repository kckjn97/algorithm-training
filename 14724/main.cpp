#include <iostream>

using namespace std;


int main() {
	int n;
	string name[] = {"PROBRAIN", "GROW", "ARGOS", "ADMIN", "ANT", "MOTION", "SPG", "COMON", "ALMIGHTY"};
	cin >> n;

	int max_i=0;
	int max_v=0;
	for(int i=0; i<9; i++){
		for(int j=0; j<n; j++){
			int tmp;
			cin >> tmp;
			if(tmp > max_v){
				max_i = i;
				max_v = tmp;
			}
		}
	}
	cout << name[max_i] << endl;
}

#include <iostream>

using namespace std;

int main() {
	int e, s, m;
	cin >> e >> s >> m;
	
	if(e == 15) e = 0;
	if(s == 28) s = 0;
	if(m == 19) m = 0;

	for(int i=1; ;i++){
		if(i%15 == e){
			if(i%28 == s){
				if(i%19 == m){
					cout << i << endl;
					return 0;
				}
			}
		}
	}
}

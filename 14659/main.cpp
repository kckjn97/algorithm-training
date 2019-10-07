#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int max = 0;
	int kill = 0;
	int h = 0;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		if(tmp > h){
			h = tmp;
			kill = 0;
		}else{
			kill++;
			if(kill > max)
				max = kill;
		}
	}
	cout << max << endl;
}

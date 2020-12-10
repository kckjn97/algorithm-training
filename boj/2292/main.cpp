#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int diff = 1;
	int beg=1,end=1;
	for(int i=0; ;i++){
		if(beg <= n && n <= end){
			cout << i+1 << endl;
			break;
		}
		diff = (i+1)*6;
		beg=end+1;
		end=end+diff;
	}
}

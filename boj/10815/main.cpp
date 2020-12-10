#include <iostream>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	char bitmap[20000000]= {0};
	
	cin >> n;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		bitmap[tmp+10000000] = 1;
	}
	
	cin >> m;
	for(int i=0; i<m; i++){
		int tmp;
		cin >> tmp;
		if(bitmap[tmp+10000000])
			cout << "1 ";
		else
			cout << "0 ";
	}
	cout << "\n";
}

#include <iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	bool* flag = new bool[n+1];
	for(int i=0; i<n+1; i++)
		flag[i] = false;
	int cnt = 0;
	for(int i=2; i<=n; i++){
		if(flag[i] == true)
			continue;
		for(int j=1; i*j<=n ;j++){
			if(flag[i*j] == false){
				cnt++;
				flag[i*j]=true;
				if(cnt == k){
					cout << i*j << endl;
					return 0;
				}
			}
		}
	}
}

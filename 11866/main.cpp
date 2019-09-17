#include <iostream>

using namespace std;

int main() {
	char* flag;
	int n, k;
	cin >> n >> k;
	flag = (char*) malloc(sizeof(char) * n);
	for(int i=0; i<n; i++)
		flag[i] = 0;
	
	int cnt = 0;
	int i=-1;
	cout << "<";
	while(cnt < n){
		for(int j=0; j<k; j++){
			i++;
			while(flag[i%n] == 1)
				i++;
		}
		cout << i%n+1;
		flag[i%n] = 1;
		cnt++;
		if(cnt < n)
			cout << ", ";
		else
			cout << ">" << endl;
	}
}

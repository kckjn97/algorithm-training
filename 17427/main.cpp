#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	long sum = 0;
	for(int i=1; i<=N;i++){
		for(int j=1; j<=N; j++){
			if(i*j <= N){
				sum+=i;
			}
			if(i*j > N)
				break;
		}
	}
	cout << sum << endl;
}

#include <iostream>
#include <cstring>
#include <tuple>
#include <cstdlib>

using namespace std;

inline std::pair<int, int> compute_score(char a[3], char b[3]){
	int strike = 0;
	int ball = 0;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(i==j){
				if(a[i] == b[j]){
					strike++;
				}
			}else{
				if(a[i] == b[j])
					ball++;
			}
		}
	}
	return {strike, ball};
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	char bitmap[1000];
	memset(bitmap, 0x01, 1000);
	
	for(int i=0; i<n; i++){
		char num[4];
		char num2[4];
		cin >> num;
		int s,b;
		cin >> s >> b;
		for(int j=111; j<1000; j++){
			if(bitmap[j]){
				sprintf(num2, "%d", j);
				if(num2[0] == '0' || num2[1] == '0' || num2[2] == '0'){
					bitmap[j] = 0;
					continue;
				}
				std::pair<int, int> res = compute_score(num, num2);

				if(res.first != s || res.second != b){
					bitmap[j] = 0;
				}
				//else
				//	cout << j << " " << res.first << " " << res.second << " " << (int)bitmap[j] << "\n";
			}
		}
	}	

	int res = 0;
	for(int i=1; i<10; i++){
		for(int j=1; j<10; j++){
			for(int k=1; k<10; k++){
				if(i == j || j==k || i ==k)
					continue;
				int num = i*100+j*10+k;
				if(bitmap[num]){
					res++;
				}
			}
		}
	}

	cout << res << "\n";
}

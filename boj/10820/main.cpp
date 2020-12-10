#include <iostream>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char str[102];

	while(fgets(str, 102, stdin)){
		int res[4] = {0};
		for(int i=0; i<101; i++){
			if(str[i] == 0)
				break;
			else if(str[i] >= 'a' && str[i] <='z')
				res[0]++;
			else if(str[i] >= 'A' && str[i] <='Z')
				res[1]++;
			else if(str[i] >= '0' && str[i] <='9')
				res[2]++;
			else if(str[i] == ' ')
				res[3]++;
		}
		cout << res[0] << " " << res[1] << " " << res[2] << " " << res[3] << "\n";
	}
}

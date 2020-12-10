#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int cnt[10001] = {0};
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int tmp;
		scanf("%d", &tmp);
		cnt[tmp]++;
	}
	
	for(int i=0; i<10001; i++)
		if(cnt[i] > 0)
			for(int j=0; j<cnt[i]; j++)
				printf("%d\n", i);
}

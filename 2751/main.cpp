#include <cstdio>
#include <cstdlib>

using namespace std;

#define BASE 1000000
int main() {
	char* flag = (char*) malloc(2*BASE+1);
	int n;
	scanf("%d", &n);

	for(int i=0; i<BASE; i++)
		flag[i] = 0;

	for(int i=0; i<n; i++){
		int tmp;
		scanf("%d", &tmp);
		flag[tmp+BASE] = 1;
	}

	for(int i=0; i<2*BASE+1; i++){
		if(flag[i] == 1)
			printf("%d\n", i-BASE);
	}
}

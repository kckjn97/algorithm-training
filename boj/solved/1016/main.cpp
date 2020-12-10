#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
	long min, max;
	cin >> min >> max;
	vector<long> vec;
	
	//cout << max-min+1 << endl;
	for(long i=2; i*i <= max; i++){
		long a = i*i;
		if(a <= max)
			vec.push_back(a);
	}

	char* bitmap = (char*) malloc((max-min+1)*sizeof(char));
	memset(bitmap, 0x00, (max-min+1)*sizeof(char));

	for(int i=0; i<vec.size(); i++){
		for(long j=min/vec[i]; ;j++){
		//for(long j=1; ;j++){
			if(j < 1) continue;
			if(vec[i] * j < min) continue;
			if(vec[i] * j > max) break;
			//if(vec[i]*j - min >= (max-min+1) || vec[i]*j-min <0)
			//	cout << vec[i] << " " << j << " " << min <<endl;
			bitmap[vec[i] * j - min] = 1;
		}
	}
	
	int cnt = 0;
	for(int i=0; i<max-min+1; i++)
		if(bitmap[i] == 0)
			cnt++;

	cout << cnt << endl;
	free(bitmap);
}

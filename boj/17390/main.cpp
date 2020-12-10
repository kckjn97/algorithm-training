#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	vector<int> vec;
	vec.reserve(n);
	for(int i=0; i<n; i++){
		int tmp;
		scanf("%d", &tmp);
		vec.push_back(tmp);
	}
	sort(vec.begin(), vec.end());
	vector<long> acc;
	acc.reserve(n+1);
	long sum = 0;
	acc.push_back(0);
	for(int i=0; i<vec.size(); i++){
		sum += vec[i];
		acc.push_back(sum);
	}

	for(int i=0; i<q; i++){
		int l,r;
		scanf("%d %d", &l, &r);
		printf("%ld\n", acc[r] - acc[l-1]);
	}
}

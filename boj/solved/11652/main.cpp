#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
	long n;
	cin >> n;
	vector<long> vec;
	for(long i=0; i<n; i++){
		long tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}
	sort(vec.begin(), vec.end());
	unordered_map<long, long> m;
	for(long i=0; i<vec.size(); i++){
		long t = vec[i];
		if(m.find(t) == m.end())
			m[t] = 1;
		else
			m[t]++;
	}
	
	long max_v = 0;
	long max_k = 2>>31;

	for(auto it = m.begin(); it != m.end(); it++){
		if(it->second > max_v){
			max_k = it->first;
			max_v = it->second;
		}else if(it->second == max_v){
			if(max_k > it->first){
				max_k = it->first;
			}
		}
	}
	cout << max_k << endl;
}

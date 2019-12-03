#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector<int> vec;
	vec.push_back(n);

	char bitmap[100001] = {0};

	int res = 0;
	while(vec.size()){
		vector<int> vec2;
		for(int i=0; i<vec.size(); i++){
			int current = vec[i];
			bitmap[current] = 1;
			if(current == k){
				cout << res << "\n";
				return 0;
			}
			if(current > 0){
				if(!bitmap[current-1])
					vec2.push_back(current-1);
			}
			if(current < 100000){
				if(!bitmap[current+1])
					vec2.push_back(current+1);
			}
			if(current > 0 && current <= 50000){
				if(!bitmap[current*2])
					vec2.push_back(current*2);
			}
		}
		vec.clear();
		vec = vec2;
		res++;
	}
}

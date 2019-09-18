#include <iostream>
#include <cstring>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int cur=0;
	vector<int> vec;
	
	for(int i=0; i<n; i++)
		vec.push_back(i+1);

	int sum = 0;
	for(int i=0; i<m; i++){
		int val;
		cin >> val;
		int dest;
		for(int i=0; i<vec.size(); i++)
			if(val == vec[i])
				dest = i;
		int left = cur > dest ? cur - dest : dest-cur;
		int right = cur > dest ? dest+vec.size() - cur : cur+vec.size() - dest;
		int dist = left > right ? right : left;
		//cout << dist << " " <<vec.size() << " " << cur<< " " <<dest<< endl;
		cur = dest;
		vec.erase(vec.begin()+dest);
		sum += dist;
	}
	cout << sum << endl;
}

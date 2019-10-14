#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	for(int test_case=0; test_case<T; test_case++){
		int m, n, k;
		cin >> m >> n >> k;
		vector<pair<int, int>> vec;
		int** map = (int**) malloc(sizeof(int*) * m);
		for(int i=0; i<m; i++){
			map[i] = (int*) malloc(sizeof(int) * n);
			memset(map[i], 0x00, sizeof(int)*n);
		}
		
		for(int i=0; i<k; i++){
			int x, y;
			cin >> x >> y;
			map[x][y] = i+1;		
			vec.push_back({x, y});
		}
		sort(vec.begin(), vec.end());

		bool changed;
		do{
			changed = false;
			for(int i=0; i<k; i++){
				int x = vec[i].first;
				int y = vec[i].second;
				
				int cur = map[x][y];
				if(x > 0){
					if(map[x-1][y] != 0){
						if(cur > map[x-1][y]){
							map[x-1][y] = cur;
							changed = true;
						}
					}
				}

				if(y > 0){
					if(map[x][y-1] != 0){
						if(cur > map[x][y-1]){
							map[x][y-1] = cur;
							changed = true;
						}
					}
				}

				if(x < m-1){
					if(map[x+1][y] != 0){
						if(cur > map[x+1][y]){
							map[x+1][y] = cur;
							changed = true;
						}
					}
				}
				if(y < n-1){
					if(map[x][y+1] != 0){
						if(cur > map[x][y+1]){
							map[x][y+1] = cur;
							changed = true;
						}
					}
				}
			}
		}while(changed);

		set<int> s;
		for(int i=0; i<k; i++){
			int x = vec[i].first;
			int y = vec[i].second;
			//cout << x << " " << y << " " << map[x][y] << endl;
			s.insert(map[x][y]);
		}
		
		cout << s.size() << endl;
	}

}

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<pair<int, int>> vec;
	int min = 1000000000;
	for(int i=0; i<n; i++){
		int x, y;
		cin >> x >> y;
		for(int j=0; j<vec.size(); j++){
			int x1 = vec[j].first;
			int y1 = vec[j].second;

			if((x1-x)*(x1-x) + (y1-y)*(y1-y) < min){
				min = (x1-x)*(x1-x) + (y1-y)*(y1-y);
			}
			
			if(min == 0){
				cout << "0\n";
				return 0;
			}
		}
		vec.push_back({x, y});
	}

	cout << min << "\n";
}

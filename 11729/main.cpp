#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> vec;
int cnt = 0;

void hanoi(int n, int from, int to, int tmp){
	if(n==1){
		cnt++;
		vec.push_back({from, to});
		//cout << from << " - " << to << endl;
		return;
	}
	hanoi(n-1, from, tmp, to);
	hanoi(1, from, to, tmp);
	hanoi(n-1, tmp, to, from);
}

int main() {
	int n;
	cin >> n;
	hanoi(n, 1, 3, 2);
	cout << cnt << endl;
	for(int i=0; i<vec.size(); i++)
		printf("%d %d\n", vec[i].first, vec[i].second);
}

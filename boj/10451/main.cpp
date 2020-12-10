#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	for(int test_case=0; test_case<T; test_case++){
		int n;
		cin >> n;
		vector<int> vec;
		vec.reserve(n);
		for(int i=0; i<n; i++){
			int tmp;
			cin >> tmp;
			vec.push_back(tmp-1);
		}
		
		int res = 0;
		char bitmap[1000] = {0};
		for(int i=0; i<n; i++){
			if(bitmap[i] != 0)
				continue;
			int start = i;
			int cursor = vec[start];
			while(start!=cursor){
				if(bitmap[cursor] == 1)
					break;
				//cout << start+1 << "->" << cursor+1 << "\n";
				bitmap[cursor] = 1;
				cursor = vec[cursor];
			}
			if(cursor == start){
				res++;
				//cout << res << "res\n";
			}
		}

		cout << res << "\n";
	}
}

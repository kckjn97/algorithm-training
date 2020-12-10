#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	vector<int> vec;
	cin >> n;

	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}

	int max = -10000;

	for(int i=0; i<n; i++){
		int sum = vec[i];
		if(sum>max)
			max = sum;
		if(vec[i] > 0){
			int a=0;
			for(int j=i+1;j<n;j++){
				if(vec[j] < 0)
					a=1;
				if(!a)
					i++;
				sum += vec[j];
				if(sum > max)
					max = sum;
			}
		}
	}
	cout << max << "\n";
}

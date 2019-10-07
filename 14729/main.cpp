#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n;
	cin >> n;
	//priority_queue<float, vector<float>, less<float>> pq;
	priority_queue<float> pq;
	for(int i=0; i<n; i++){
		float tmp;
		cin >> tmp;
		pq.push(tmp);
		if(pq.size() > 7)
			pq.pop();
	}
	
	vector<float> vec;
	while(!pq.empty()){
		vec.push_back(pq.top());
		pq.pop();
	}

	cout << fixed;
	cout.precision(3);
	for(int i=vec.size()-1; i>=0; i--)
		cout << vec[i] << endl;
}

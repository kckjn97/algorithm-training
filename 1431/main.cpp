#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string &a, const string &b){
	if(a.size() == b.size()){
		int na=0, nb=0;
		for(int i=0; i<a.size(); i++){
			if(a[i] >= '0' && a[i] <='9')
				na += a[i]-'0';
			if(b[i] >= '0' && b[i] <='9')
				nb += b[i]-'0';
		}
		
		if(na == nb)
			return a < b;
		return na < nb;
	}
	return a.size() < b.size();
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	vector<string> vec;
	for(int i=0; i<n; i++){
		string str;
		cin >> str;
		vec.push_back(str);
	}

	sort(vec.begin(), vec.end(), compare);
	
	for(int i=0; i<vec.size(); i++)
		cout << vec[i] << endl;
}

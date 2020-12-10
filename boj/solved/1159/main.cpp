#include <iostream>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int arr['z'-'a'+1] = {0};
	for(int i=0; i<n; i++){
		string str;
		cin >> str;
		arr[str[0]-'a']++;
	}
	
	int predaja = 1;
	for(int i=0; i<'z'-'a'+1; i++){
		if(arr[i] >=5){
			cout << (char) ('a'+i);
			predaja = 0;
		}
	}
	if(predaja)
		cout << "PREDAJA";
	cout << "\n";
}

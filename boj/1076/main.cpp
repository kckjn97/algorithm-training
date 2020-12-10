#include <iostream>

using namespace std;

int main() {
	string str;
	long res;
	long n;
	long mux;
	
	for(int i=0; i<3; i++){
		cin >> str;
		if(str == "black"){
			n=0;
			mux=1;
		}else if(str == "brown"){
			n=1;
			mux=10;
		}else if(str =="red"){
			n=2;
			mux=100;
		}else if(str == "orange"){
			n=3;
			mux=1000;
		}else if(str == "yellow"){
			n=4;
			mux=10000;
		}else if(str == "green"){
			n=5;
			mux=100000;
		}else if(str == "blue"){
			n=6;
			mux=1000000;
		}else if(str == "violet"){
			n=7;
			mux=10000000;
		}else if(str == "grey"){
			n=8;
			mux=100000000;
		}else if(str == "white"){
			n=9;
			mux=1000000000;
		}
		
		if (i==0){
			res=n;
		}else if(i==1){
			res=res*10+n;
		}else if(i==2){
			res=res*mux;
		}
	}	
	cout << res << endl;
}

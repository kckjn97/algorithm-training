#include <iostream>
#include <math.h>

float dist(float x1, float y1, float x2, float y2){
	return sqrt((x2-x1)*(x2-x1) +  (y2-y1)*(y2-y1));
}

int main(){
	int n, x1, y1, r1, x2, y2, r2;

	std::cin >> n;
	for( int i = 0; i < n; i++){
		std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		float d = dist(x1,y1,x2,y2);
		//std::cout << r1 << " " << r2 << " " <<d<<"\n";
		int res;
		if(d == 0){
			if(r1 == r2)
				res = -1;
			else
				res = 0;
		}else{
			if(r1+r2 == d)
				res = 1;
			else if(d == abs(r1-r2))
				res = 1;
			else if(d < abs(r1-r2))
				res = 0;
			else if(r1+r2 > d && abs(r1-r2) < d)
				res = 2;
			else
				res = 0;
		}
		std::cout << res << "\n";
	}
}

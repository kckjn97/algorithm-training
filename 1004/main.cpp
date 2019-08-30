#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>

int main() {
	int n;
	std::cin >> n;
	for(int i=0; i<n; i++){
		int x1, y1, x2, y2;
		int num_circle;
		int cx, cy, r;

		std::cin >> x1 >> y1 >> x2 >> y2;
		std::cin >> num_circle;

		std::set<int> s1, s2;
		for(int j=0; j<num_circle; j++){
			std::cin >> cx >> cy >> r;
			if( (cx-x1)*(cx-x1) + (cy-y1)*(cy-y1) <= r*r)
				s1.insert(j);
			if( (cx-x2)*(cx-x2) + (cy-y2)*(cy-y2) <= r*r)
				s2.insert(j);
		}

		std::set<int> result;
		std::set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), std::inserter(result, result.begin()));
		std::set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), std::inserter(result, result.begin()));
		std::cout << result.size() << "\n";
	}
}

#include <iostream>

using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int minx = w-x > x ? x : w-x;
	int miny = h-y > y ? y : h-y;
	int min = minx > miny ? miny : minx;
	cout << min << endl;
}

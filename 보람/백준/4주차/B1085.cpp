#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int left = x;
	int right = w - x;
	int top = h - y;
	int bottom = y;

	int min_distance = min({ left, right, top, bottom });

	cout << min_distance;
}

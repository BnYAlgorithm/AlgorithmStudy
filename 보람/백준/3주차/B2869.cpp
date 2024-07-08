#include <iostream>

using namespace std;

int main(void) {
	int A, B, V;
	cin >> A >> B >> V;

	int remaining_distance = V - B;
	int today_distance = A - B;
	int day = (remaining_distance + today_distance - 1) / today_distance;
	
	cout << day;
}

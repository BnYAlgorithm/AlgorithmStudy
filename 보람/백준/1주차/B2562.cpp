#include <iostream>

using namespace std;

int main(void) {
	int arr[9], max = 0, pos = 0;
	
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];

		if (max < arr[i]) {
			max = arr[i];
			pos = i;
		}
	}

	cout << max << "\n" << pos + 1;
}

#include <iostream>

using namespace std;

int main(void) {
	string num;
	int time = 0;
	cin >> num;

	for (int i = 0; i < num.length(); i++) {
		if (num[i] == 'A' || num[i] == 'B' || num[i] == 'C') time += 3;
		else if (num[i] == 'D' || num[i] == 'E' || num[i] == 'F') time += 4;
		else if (num[i] == 'G' || num[i] == 'H' || num[i] == 'I') time += 5;
		else if (num[i] == 'J' || num[i] == 'K' || num[i] == 'L') time += 6;
		else if (num[i] == 'M' || num[i] == 'N' || num[i] == 'O') time += 7;
		else if (num[i] == 'P' || num[i] == 'Q' || num[i] == 'R' || num[i] == 'S') time += 8;
		else if (num[i] == 'T' || num[i] == 'U' || num[i] == 'V') time += 9;
		else if (num[i] == 'W' || num[i] == 'X' || num[i] == 'Y' || num[i] == 'Z') time += 10;
	}

	cout << time;
}

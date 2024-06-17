#include <iostream>

using namespace std;

int main()
{
	int num;

	cin >> num;

	if (num < 60)
		cout << "F";
	else if (num < 70)
		cout << "D";
	else if (num < 80)
		cout << "C";
	else if (num < 90)
		cout << "B";
	else
		cout << "A";
}
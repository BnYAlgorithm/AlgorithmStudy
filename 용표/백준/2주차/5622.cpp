#include <iostream>

using namespace std;

int main()
{
	int arr[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
	string s;
	cin >> s;
	int result = 0;
	for (char c : s)
		result += arr[c - 'A'];
	cout << result;
}
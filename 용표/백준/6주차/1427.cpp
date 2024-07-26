#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	cin >> str;
	vector<int> arr(str.length());
	for (int i = 0; i < arr.size(); i++)
		arr[i] = str[i] - '0';

	sort(arr.begin(), arr.end());
	reverse(arr.begin(), arr.end());
	for (int num : arr)
		cout << num;
}
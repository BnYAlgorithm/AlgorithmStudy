#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> arr;
	arr.resize(26, 0);

	string s;
	cin >> s;
	for (char c : s)
	{
		if (c >= 'a' && c <= 'z')
			c -= 32;
		arr[c - 'A']++;
	}

	int count = 0;
	int max_idx = max_element(arr.begin(), arr.end()) - arr.begin();
	int max_num = *max_element(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++)
		if (arr[i] == max_num)
			count++;

	if (count >= 2)
		cout << "?";
	else
		cout << char('A' + (max_idx));
}
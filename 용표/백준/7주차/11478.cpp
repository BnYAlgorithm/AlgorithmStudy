#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<string> arr;
	string str;
	cin >> str;

	for (int length = 0; length < str.length(); length++)
	{
		for (int i = length; i < str.length(); i++)
			arr.insert(str.substr(length , i - length + 1));
	}

	cout << arr.size();
}
#include <iostream>
#include <map>

using namespace std;

int main()
{
	int n;
	cin >> n;

	map<string, string, greater<string>> arr;
	for (int i = 0; i < n; i++)
	{
		string name, isIn;
		cin >> name >> isIn;
		
		arr[name] = isIn;
	}

	for (auto i = arr.begin(); i != arr.end(); i++)
	{
		if (i->second == "enter")
			cout << i->first << "\n";
	}
}
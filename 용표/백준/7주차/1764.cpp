#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	map<string, int> names;
	for (int i = 0; i < N; i++)
	{
		string name;
		cin >> name;
		names.insert({ name, i });
	}

	vector<string> arr;
	for (int i = 0; i < M; i++)
	{
		string name;
		cin >> name;
		if (names.find(name) != names.end())
			arr.push_back(name);
	}

	cout << arr.size() << "\n";
	sort(arr.begin(), arr.end());
	for (string name : arr)
		cout << name << "\n";
}
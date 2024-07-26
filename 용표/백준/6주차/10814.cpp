#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main()
{
	vector<pair<int, string>> arr;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int age;
		string name;
		cin >> age >> name;
		arr.push_back(make_pair(age, name));
	}
	stable_sort(arr.begin(), arr.end(), compare);
	for (pair<int, string> e : arr)
		cout << e.first << " " << e.second << "\n";
}
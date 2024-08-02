#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<pair<int, string>> arr;
	vector<string> strarr;
	for (int i = 0; i < N; i++)
	{
		string tmp;
		cin >> tmp;
		if (find(strarr.begin(), strarr.end(), tmp) == strarr.end())
		{
			arr.push_back(make_pair(tmp.length(), tmp));
			strarr.push_back(tmp);
		}
	}

	sort(arr.begin(), arr.end());
	for (pair<int, string> e : arr)
		cout << e.second << "\n";
}
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	unordered_map<string, int> arr;
	vector<string> arr2;
	for (int i = 0; i < N; i++)
	{
		string name;
		cin >> name;
		arr[name] = i + 1;
		arr2.push_back(name);
	}

	vector<string> question(M);
	for (int i = 0; i < M; i++)
		cin >> question[i];

	for (string tmp : question)
	{
		if (atoi(tmp.c_str()) == 0)
			cout << arr[tmp] << "\n";
		else
			cout << arr2[atoi(tmp.c_str()) - 1] << "\n";
	}
}
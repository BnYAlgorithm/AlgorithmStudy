#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;

	unordered_map<int, int> cards;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		if (cards.find(num) != cards.end())
			cards[num]++;
		else
			cards[num] = 1;
	}

	int M;
	cin >> M;
	vector<int> arr(M);
	for (int i = 0; i < M; i++)
		cin >> arr[i];

	for (int num : arr)
		cout << cards[num] << " ";
}
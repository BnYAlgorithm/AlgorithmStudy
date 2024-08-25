#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{
	deque<int> dq;

	int N;
	cin >> N;

	vector<int> isStack(N);
	for (int i = 0; i < N; i++)
		cin >> isStack[i];

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		if (!isStack[i])
			dq.push_back(num);
	}

	int M;
	cin >> M;

	vector<int> res;
	if (dq.empty())
	{
		for (int i = 0; i < M; i++)
		{
			int num;
			cin >> num;
			res.push_back(num);
		}
	}
	else
	{
		for (int i = 0; i < M; i++)
		{
			int num;
			cin >> num;
			dq.push_front(num);
			res.push_back(dq.back());
			dq.pop_back();
		}
	}

	for (int num : res)
		cout << num << " ";
}
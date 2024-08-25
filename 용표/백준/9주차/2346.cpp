#include <iostream>
#include <deque>
#include <stdlib.h>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;

	deque<pair<int, int>> dq;
	vector<int> res;
	for (int i = 1; i <= N; i++)
	{
		int num;
		cin >> num;
		dq.push_back(make_pair(num, i));
	}

	bool isRight;
	int dist = dq.front().first;
	res.push_back(dq.front().second);
	dq.pop_front();

	if (dist > 0)
		isRight = true;
	else
		isRight = false;

	dist = abs(dist);

	int idx = 1;
	
	while (dq.size() != 1)
	{
		if (idx == dist)
		{
			if (isRight)
			{
				res.push_back(dq.front().second);
				dist = dq.front().first;
				if (dist > 0)
					isRight = true;
				else
					isRight = false;
				dist = abs(dist);
				idx = 1;
				dq.pop_front();
			}
			else
			{
				res.push_back(dq.back().second);
				dist = dq.back().first;
				if (dist > 0)
					isRight = true;
				else
					isRight = false;
				dist = abs(dist);
				idx = 1;
				dq.pop_back();
			}
		}
		else
		{
			idx++;
			if (isRight)
			{
				dq.push_back(dq.front());
				dq.pop_front();
			}
			else
			{
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}

	res.push_back(dq.front().second);
	for (int num : res)
		cout << num << " ";
}
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> q;
	queue<int> res;
	int N, K;
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
		q.push(i);

	int idx = 1;
	while (!q.empty())
	{
		if (idx == K)
		{
			res.push(q.front());
			q.pop();
			idx = 1;
		}
		else
		{
			q.push(q.front());
			q.pop();
			idx++;
		}
	}

	cout << "<";
	while (res.size() != 1)
	{
		cout << res.front() << ", ";
		res.pop();
	}
	cout << res.front() << ">";
}
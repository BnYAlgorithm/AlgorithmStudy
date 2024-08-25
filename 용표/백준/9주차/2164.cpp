#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> q;
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
		q.push(i);

	bool isMove = false;
	while (q.size() != 1)
	{
		if (isMove)
		{
			q.push(q.front());
			q.pop();
			isMove = false;
		}
		else
		{
			q.pop();
			isMove = true;
		}
	}
	cout << q.front();
}
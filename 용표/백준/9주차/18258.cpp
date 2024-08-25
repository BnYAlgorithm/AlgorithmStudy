#include <iostream>
#include <queue>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	queue<int> q;
	for (int i = 0; i < N; i++)
	{
		string tmp;
		cin >> tmp;

		if (tmp == "push")
		{
			int num;
			cin >> num;
			q.push(num);
		}
		if (tmp == "pop")
		{
			if (q.empty())
				cout << "-1";
			else
			{
				cout << q.front();
				q.pop();
			}
			cout << "\n";
		}
		if (tmp == "size")
		{
			cout << q.size() << "\n";
		}
		if (tmp == "empty")
		{
			if (q.empty())
				cout << "1";
			else
				cout << "0";
			cout << "\n";
		}
		if (tmp == "front")
		{
			if (q.empty())
				cout << "-1";
			else
				cout << q.front();
			cout << "\n";
		}
		if (tmp == "back")
		{
			if (q.empty())
				cout << "-1";
			else
				cout << q.back();
			cout << "\n";
		}
	}
}
#include <iostream>
#include <deque>

using namespace std;

int	main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	deque<int> dq;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int command;
		cin >> command;
		if (command == 1)
		{
			int num;
			cin >> num;
			dq.push_front(num);
		}
		if (command == 2)
		{
			int num;
			cin >> num;
			dq.push_back(num);
		}
		if (command == 3)
		{
			if (dq.empty())
				cout << "-1";
			else
			{
				cout << dq.front();
				dq.pop_front();
			}
			cout << "\n";
		}
		if (command == 4)
		{
			if (dq.empty())
				cout << "-1";
			else
			{
				cout << dq.back();
				dq.pop_back();
			}
			cout << "\n";
		}
		if (command == 5)
		{
			cout << dq.size() << "\n";
		}
		if (command == 6)
		{
			if (dq.empty())
				cout << "1";
			else
				cout << "0";
			cout << "\n";
		}
		if (command == 7)
		{
			if (dq.empty())
				cout << "-1";
			else
				cout << dq.front();
			cout << "\n";
		}
		if (command == 8)
		{
			if (dq.empty())
				cout << "-1";
			else
				cout << dq.back();
			cout << "\n";
		}
	}
}
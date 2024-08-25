#include <iostream>
#include <stack>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
	stack<int> s;
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
			s.push(num);
		}
		else if (command == 2)
		{
			if (!s.empty())
			{
				cout << s.top();
				s.pop();
			}
			else
				cout << "-1";
			cout << "\n";
		}
		else if (command == 3)
		{
			cout << s.size() << "\n";
		}
		else if (command == 4)
		{
			if (s.empty())
				cout << 1;
			else
				cout << 0;
			cout << "\n";
		}
		else if (command == 5)
		{
			if (!s.empty())
				cout << s.top();
			else
				cout << "-1";
			cout << "\n";
		}
	}
}
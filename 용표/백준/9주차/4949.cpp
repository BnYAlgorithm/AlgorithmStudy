#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool IsBalance(string str)
{
	stack<int> s;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '(')
			s.push(1);
		else if (str[i] == ')')
		{
			if (s.empty() || s.top() == 2)
				return false;
			s.pop();
		}
		else if (str[i] == '[')
			s.push(2);
		else if (str[i] == ']')
		{
			if (s.empty() || s.top() == 1)
				return false;
			s.pop();
		}
	}
	if (s.size() == 0)
		return true;
	else
		return false;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;
	while (true)
	{
		getline(cin, str);
		if (str == ".")
			break;
		if (IsBalance(str))
			cout << "yes";
		else
			cout << "no";
		cout << "\n";
	}
}
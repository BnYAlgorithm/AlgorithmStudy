#include <iostream>
#include <stack>

using namespace std;

bool IsVPS(string str)
{
	stack<int> s;
	for (int j = 0; j < str.size(); j++)
	{
		if (str[j] == '(')
			s.push(1);
		else
		{
			if (s.empty())
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
    
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		string str;
		cin >> str;
		if (IsVPS(str))
			cout << "YES";
		else
			cout << "NO";
		cout << "\n";
	}
}
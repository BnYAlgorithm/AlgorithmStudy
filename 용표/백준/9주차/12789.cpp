#include <iostream>
#include <stack>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	int curNum = 1;
	stack<int> s;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		if (num == curNum)
			curNum++;
		else
			s.push(num);

		while (!s.empty() && s.top() == curNum)
		{
			s.pop();
			curNum++;
		}
	}
	if (s.size() == 0)
		cout << "Nice";
	else
		cout << "Sad";
}
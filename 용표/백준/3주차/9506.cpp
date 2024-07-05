#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	while (true)
	{
		cin >> n;
		if (n == -1) break;

		vector<int> numbers;
		int sum = 0;
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				numbers.push_back(i);
				sum += i;
			}
		}

		if (sum == n)
		{
			cout << n << " = ";
			for (int i = 0; i < numbers.size(); i++)
			{
				cout << numbers[i];
				if (i != numbers.size() - 1)
					cout << " + ";
			}
			cout << "\n";
		}
		else
		{
			cout << n << " is NOT perfect.\n";
		}
	}
}
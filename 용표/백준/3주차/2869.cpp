#include <iostream>

using namespace std;

int main()
{
	int A, B, V;
	cin >> A >> B >> V;

	if (A >= V)
		cout << 1;
	else
	{
		int day = 1;
		day += (V - A) / (A - B);

		if ((V - A) % (A - B) != 0)
			day++;
		
		cout << day;
	}

}
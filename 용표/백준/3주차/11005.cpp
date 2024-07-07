#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N, B;
	
	cin >> N >> B;

	string result = "";
	while (true)
	{
		if (N % B >= 10)
			result += (N % B - 10) + 'A';
		else
			result += (N % B) + '0';
		
		if (N / B == 0) break;
		N /= B;
	}
	reverse(result.begin(), result.end());
	cout << result;
}
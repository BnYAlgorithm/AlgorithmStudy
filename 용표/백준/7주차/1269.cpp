#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() // 104
{
	int n, m;
	cin >> n >> m;

	map<int, int> A;
	vector<int> A_num(n);
	map<int, int> B;
	vector<int> B_num(m);

	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		A[tmp] = 0;
		A_num[i] = tmp;
	}

	for (int i = 0; i < m; i++)
	{
		int tmp;
		cin >> tmp;
		B[tmp] = 0;
		B_num[i] = tmp;
	}

	int res_A = 0;
	for (int i = 0; i < n; i++)
	{
		if (B.find(A_num[i]) == B.end())
			res_A++;
	}

	int res_B = 0;
	for (int i = 0; i < m; i++)
	{
		if (A.find(B_num[i]) == A.end())
			res_B++;
	}

	cout << res_A + res_B;
}
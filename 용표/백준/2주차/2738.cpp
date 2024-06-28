#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<vector<int>> A, B;
	A.resize(N, vector<int>(M, 0));
	B.resize(N, vector<int>(M, 0));

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> A[i][j];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> B[i][j];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cout << A[i][j] + B[i][j] << " ";
		cout << "\n";
	}
}
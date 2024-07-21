#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	vector<string> board;
	for (int i = 0; i < N; i++)
	{
		string tmp;
		cin >> tmp;
		board.push_back(tmp);
	}

	vector<string> blackBoard = {
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB"
	};

	vector<string> whiteBoard = {
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",	
		"BWBWBWBW"
	};

	int min = 64; // 8x8 보드이므로
	for (int i = 0; i <= N - 8; i++)
	{
		for (int j = 0; j <= M - 8; j++)
		{
			int tmpBlack = 0, tmpWhite = 0;
			for (int y = 0; y < 8; y++)
			{
				for (int x = 0; x < 8; x++)
				{
					if (board[i + y][j + x] != blackBoard[y][x])
						tmpBlack++;
					if (board[i + y][j + x] != whiteBoard[y][x])
						tmpWhite++;
				}
			}
			int tmp;
			if (tmpBlack < tmpWhite) tmp = tmpBlack;
			else tmp = tmpWhite;

			if (tmp < min) min = tmp;
		}
	}
	cout << min;
}
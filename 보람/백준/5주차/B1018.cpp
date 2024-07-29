#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cntRepaints(vector<string> board, int x, int y, char startColor) {
	int repaints = 0;
	char nextColor = startColor;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j] != nextColor) repaints += 1;
			nextColor = (nextColor == 'W') ? 'B' : 'W';
		}
		nextColor = (nextColor == 'W') ? 'B' : 'W';
	}

	return repaints;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, minRepaints = 64;
	cin >> N >> M;

	vector<string> board(N);
	for (int i = 0; i < N; i++) cin >> board[i];

	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			int repaintsWB = cntRepaints(board, i, j, 'W');
			int repaintsBW = cntRepaints(board, i, j, 'B');
			minRepaints = min(minRepaints, min(repaintsWB, repaintsBW));
		}
	}

	cout << minRepaints;
}

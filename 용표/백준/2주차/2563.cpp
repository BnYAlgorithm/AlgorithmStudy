#include <iostream>

using namespace std;

int main()
{
    int a[100][100] = { 0 };
    int n, x, y, result = 0;
    cin >> n;
    while (n--) {
        cin >> x >> y;
        for (int i = y; i < y + 10; i++) {
            for (int j = x; j < x + 10; j++) {
                if (!a[i][j]) {
                    result++;
                    a[i][j] = 1;
                }
            }
        }
    }
    cout << result;
}
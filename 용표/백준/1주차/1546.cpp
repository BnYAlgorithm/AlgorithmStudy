#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	vector<float> arr;

	cin >> N;

	arr.resize(N);
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	float max = *max_element(arr.begin(), arr.end());
	
	float sum = 0;
	for (float num : arr)
	{
		num = num / max * 100;
		sum += num;
	}
	cout << sum / arr.size();
}
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	vector<int> arr;
	
	cin >> N;

	int max = -9999999, min = 9999999;
	int tmp;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		arr.push_back(tmp);
		if (tmp > max)
			max = tmp;
		if (tmp < min)
			min = tmp;
	}
	
	cout << min << " " << max;
}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	vector<int> arr;
//
//	cin >> N;
//	arr.resize(N);
//
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//
//	cout << *min_element(arr.begin(), arr.end()) << " " << *max_element(arr.begin(), arr.end());
//}
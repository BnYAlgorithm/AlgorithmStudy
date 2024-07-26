#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<long long> arr;		// �Է� ���� �� �迭
	vector<long long> arr_res;	// �������� �� �񱳿� �迭
	for (int i = 0; i < N; i++)
	{
		long long tmp;
		cin >> tmp;
		arr.push_back(tmp);
		arr_res.push_back(tmp);
	}

	sort(arr_res.begin(), arr_res.end());
	arr_res.erase(unique(arr_res.begin(), arr_res.end()), arr_res.end());
	for (int num : arr)
		cout << lower_bound(arr_res.begin(), arr_res.end(), num) - arr_res.begin() << " ";

	// find �Լ��� �̿��� �ߺ��� ���ſ� ���°�� ���� �� ã�� ������ ���� �ɸ��Ƿ� 
	// erase�� unique�� �̿��Ͽ� �ߺ� ����, ���°�� ���� �� ã�� ������ lower_bound�� �ذ�
}
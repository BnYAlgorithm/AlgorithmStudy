#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	float arr1[9] = { 4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0 };
	string arr2[9] = { "A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F" };

	int pointSum = 0;
	float gradeSum = 0;
	for (int i = 0; i < 20; i++)
	{
		string name, grade;
		float point;

		cin >> name >> point >> grade;

		if (grade == "P")
			continue;

		gradeSum += point * arr1[find(begin(arr2), end(arr2), grade) - begin(arr2)];
		pointSum += point;
	}

	float result = gradeSum / pointSum;
	cout << result;
}
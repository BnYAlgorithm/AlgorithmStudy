#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Info {
	int age, index;
	string name;
};

bool Compare(Info a, Info b) {
	if (a.age == b.age) return a.index < b.index;
	return a.age < b.age;
}

int main(void) {
	int N;
	cin >> N;

	vector<Info> member(N);

	for (int i = 0; i < N; i++) {
		cin >> member[i].age >> member[i].name;
		member[i].index = i;
	}

	sort(member.begin(), member.end(), Compare);

	for (int i = 0; i < N; i++) cout << member[i].age << " " << member[i].name << "\n";
}

#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	string name, action;
	unordered_set<string> employee;

	for (int i = 0; i < n; i++) {
		cin >> name >> action;
		
		if (action == "enter") employee.insert(name);
		else if (action == "leave") employee.erase(name);
	}

	vector<string> presentEmployee(employee.begin(), employee.end());

	sort(presentEmployee.begin(), presentEmployee.end(), greater<string>());

	for (const auto& employee : presentEmployee) cout << employee << "\n";

	return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	std::cin >> N;

	std::vector<int> v;
	for (auto i = N; i > 0; --i) v.push_back(i);

	bool is_next = true;
	while (is_next) {
		for (auto x : v) cout << x << ' ';
		cout << endl;

		is_next = prev_permutation(v.begin(), v.end());
	}

	return 0;
}
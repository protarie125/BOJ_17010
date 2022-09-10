#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;
	while (0 < (n--)) {
		auto p = int{};
		cin >> p;
		auto c = char{};
		cin >> c;

		for (auto i = 0; i < p; ++i) {
			cout << c;
		}

		cout << '\n';
	}

	return 0;
}
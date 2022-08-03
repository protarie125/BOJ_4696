#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto x = double{};
	cin >> x;
	while (0 != x) {
		auto ans = double{ 0 };
		for (auto i = 0; i < 4; ++i) {
			ans *= x;
			ans += x;
		}
		ans += 1;

		cout << fixed << setprecision(2) << ans << '\n';

		cin >> x;
	}

	return 0;
}
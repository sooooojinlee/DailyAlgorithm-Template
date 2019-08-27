#include <iostream>
using namespace std;

int fact(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n*fact(n - 1);
	}
}

int main() {
	int n;
	cin >> n;

	if (n >= 6) {
		cout << 9 << '\n';
		return 0;
	}
	int temp = fact(n);
	int sum = 0;
	while (temp > 0) {
		sum += temp % 10;
		temp /= 10;
	}
	cout << sum << '\n';
	return 0;
}